#include <iostream>

#include "Operator.h"
#include "BaseWeapon.h"
#include "Random.h"

#include <random>
#include <chrono>

#include "WeaponContainer.h"
#include "WeaponLists.h"

#include "SimulerCombat.h"

using namespace std;


void CoutSortedByDPS()
{
	auto list = WeaponLists::AllWeapons;

	WeaponLists::SortByDPS(list);

	for (auto item : list)
	{
		std::cout << item->name() << " : " << item->DPS() << std::endl;
	}
}


void SimulateCombatRandom()
{
	Operator op1 = Random::genOperator();

	Operator op2 = Random::genOperator();

	SimulerCombat simulation{ op1, op2 };
}

template<class Op1, class Op2>
void SimulateCombatOps()
{
	Operator op1 = Operator::GenerateOperator<Op1>();

	Operator op2 = Operator::GenerateOperator<Op2>();

	SimulerCombat simulation{ op1, op2 };
}

int main()
{
	// CoutSortedByDPS();

	// SimulateCombatRandom();

	SimulateCombatOps<Sledge, Kapkan>();

	cout << endl;
	system("pause");
}