#pragma once

#include <ostream>
#include <future>
#include <atomic>

#include "Operator.h"

class SimulerCombat
{
private:

	Operator& m_op1;
	Operator& m_op2;

	// Pense pas qu'un atomic / un mutex soit necessaire.
	bool Start;
	bool KeepOnGoing;

	std::vector<std::pair<Operator&, Damage>> damageLog;

public:

	SimulerCombat(Operator& op1, Operator& op2) :
		m_op1{ op1 },
		m_op2{ op2 },
		Start{ false },
		KeepOnGoing{ true }
	{
		damageLog.reserve(50);

		std::cout << op1.m_Name << Language::GetText("KEY_IS_USING") << op1.GetCurrentWeapon().m_name << std::endl;
		std::cout << op2.m_Name << Language::GetText("KEY_IS_USING") << op2.GetCurrentWeapon().m_name << std::endl
			<< std::endl;

		const auto func = [this](Operator& from, Operator& to) { OperatorFightingLoop(from, to); };

		std::future<void> future1 = std::async(std::launch::async, func, op1, op2);
		std::future<void> future2 = std::async(std::launch::async, func, op2, op1);

		Start = true;

		future1.wait();
		future2.wait();
	}

	void OperatorFightingLoop(Operator& from, Operator& to)
	{
		while (!Start); // Attendre le bool avant de commencer le combat.

		const auto fireDelay = from.GetCurrentWeapon().fireDelayMs();

		while (KeepOnGoing)
		{
			const auto before = std::chrono::high_resolution_clock::now();
			DealDamage(from, to);
			const auto after = std::chrono::high_resolution_clock::now();

			std::this_thread::sleep_for(fireDelay - (after-before));
		}
	}

	void DealDamage(Operator& from, Operator& to)
	{
		Damage dmg = from.GetCurrentWeapon().m_damage;

		dmg = to.m_Armor.ArmorModifier(to.m_Armor.TorsoModifier(dmg));

		damageLog.push_back(std::pair<Operator&, Damage>(to, dmg));

		to.m_Armor.TakeTrueDamage(dmg);
		HealthState health = to.m_Armor.CheckHealth();

		if (health == HealthState::DBNO ||
			health == HealthState::Dead)
		{
			ShowResults(to);
		}
	}

	void ShowResults(Operator& dead)
	{
		KeepOnGoing = false;

		for (std::pair<Operator&, Damage> pair : damageLog)
		{
			std::cout << pair.first.m_Name << Language::GetText("KEY_TAKES") << pair.second.val << Language::GetText("KEY_DAMAGE") << "!" << std::endl;
		}

		HealthState hs = dead.m_Armor.CheckHealth();

		std::cout << dead.m_Name << Language::GetText("KEY_HAS_LOST") << ": ";

		if (hs == HealthState::DBNO)
		{
			std::cout << Language::GetText("KEY_DNBO");
		}
		else
		{
			std::cout << Language::GetText("KEY_DEAD");
		}
	}

};