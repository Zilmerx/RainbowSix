#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <utility>

#include <algorithm>
#include <locale>

#include "OperatorTags.h"
#include "BaseWeapon.h"
#include "WeaponContainer.h"

#include "OperatorArmor.h"
#include "OperatorSpeed.h"

#include "Language.h"

class Operator
{

private:
	const WeaponContainer* m_CurrentWeapon;

public:
	ArmorInfo m_Armor;
	SpeedInfo m_Speed;

	const std::string m_Name;

	//const std::shared_ptr<PrimaryWeapon> m_PrimaryWeapon;
	//const std::shared_ptr<SecondaryWeapon> m_SecondaryWeapon;

	// const std::shared_ptr<Gadget> m_Gadget1;
	// const std::shared_ptr<Gadget> m_Gadget2;
	
	const WeaponContainer m_PrimaryWeapon;
	const WeaponContainer m_SecondaryWeapon;

public:

	template<class OpType>
	Operator(OpType opType, std::shared_ptr<PrimaryWeapon> primary, std::shared_ptr<SecondaryWeapon> secondary) :
		m_Name{ opType.GetName() },
		m_Armor{ ArmorInfo{opType} },
		m_Speed{ SpeedInfo{opType} },
		m_PrimaryWeapon{ primary },
		m_SecondaryWeapon{ secondary }
	{
		m_CurrentWeapon = &m_PrimaryWeapon;
	}

public:

	template<class OpType>
	static Operator GenerateOperator()
	{
		OpType opType;

		std::string name = opType.GetName();
		for (auto & c : name) c = toupper(c);

		system("cls");
		std::cout << name << std::endl;
		std::cout << Language::GetText("KEY_CHOOSE_PRIMARY") << std::endl;

		// Selection de l'arme primaire.

		std::shared_ptr<PrimaryWeapon> primary = SelectWeapon<OpType, PrimaryWeapon>();

		SelectAttachments(static_cast<std::shared_ptr<BaseGun>>(primary));

		// Selection de l'arme secondaire.

		system("cls");
		std::cout << name << std::endl;
		std::cout << Language::GetText("KEY_CHOOSE_SECONDARY") << std::endl;

		std::shared_ptr<SecondaryWeapon> secondary = SelectWeapon<OpType, SecondaryWeapon>();

		SelectAttachments(static_cast<std::shared_ptr<BaseGun>>(secondary));

		return Operator{ OpType{}, primary, secondary };
	}

private:
	template<class OperatorType, class WeaponType>
	static std::shared_ptr<WeaponType> SelectWeapon()
	{
		OperatorType opType;

		auto list{ opType.GetList<WeaponType>() };

		return list[SelectInList(list, false)];
	}

	static void SelectAttachments(shared_ptr<BaseGun>& weapon)
	{
		weapon->SetSights(SelectInList<shared_ptr<BaseSights>>(weapon->getSightsList()));

		weapon->SetBarrel(SelectInList<shared_ptr<BaseBarrel>>(weapon->getBarrelList()));

		weapon->SetGrip(SelectInList<shared_ptr<BaseGrip>>(weapon->getGripList()));

		weapon->SetUnderBarrel(SelectInList<shared_ptr<BaseUnderBarrel>>(weapon->getUnderBarrelList()));
	}

	template<class T>
	static size_t SelectInList(std::vector<T> list, bool DoOneSizeCase = true)
	{
		if (list.size() == 0)
			abort();

		if (DoOneSizeCase && list.size() == 1)
			return 0;

		size_t choix{ std::numeric_limits<size_t>::max() };

		do
		{
			for (size_t i = 0; i < list.size(); ++i)
			{
				std::cout << i << " : " << list[i]->name() << endl;
			}

		} while (std::cin >> choix && choix >= list.size());

		cout << endl;

		return choix;
	}


public:
	void SwitchCurrentWeapon() noexcept
	{
		if (*m_CurrentWeapon == m_PrimaryWeapon)
		{
			m_CurrentWeapon = &m_SecondaryWeapon;
		}
		else
		{
			m_CurrentWeapon = &m_PrimaryWeapon;
		}
	}

	const WeaponContainer& GetCurrentWeapon() const noexcept
	{
		return *m_CurrentWeapon;
	}


	friend std::ostream& operator<<(std::ostream& os, const Operator& obj)
	{
		os << std::endl;

		os << "*****************************" << std::endl;
		os << "* " << obj.m_Name << std::endl;
		os << "*****************************" << std::endl;

		os << std::endl;
		
		os << Language::GetText("KEY_ARMOR") << " : ";
		for (unsigned int i = 0; i < obj.m_Armor.m_ArmorLevel; ++i)
		{
			os << "*";
		}
		os << std::endl;

		os << Language::GetText("KEY_SPEED") << " : ";
		for (unsigned int i = 0; i < obj.m_Speed.m_SpeedLevel; ++i)
		{
			os << "*";
		}
		os << std::endl;

		os << std::endl;

		os << Language::GetText("KEY_PRIMARY_WEAP") << std::endl;
		os << "-----------------------------" << std::endl;
		os << obj.m_PrimaryWeapon << std::endl;
		os << std::endl;


		os << Language::GetText("KEY_SECONDARY_WEAP") << std::endl;
		os << "-----------------------------" << std::endl;
		os << obj.m_SecondaryWeapon << std::endl;

		os << std::endl;
		return os;
	}

};