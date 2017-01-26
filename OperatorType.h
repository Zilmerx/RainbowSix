#pragma once

#include <string>

#include "IncludeAllWeaponDefs.h"
#include "IncludeAllGadgets.h"
#include "OperatorArmor.h"
#include "OperatorSpeed.h"

class OperatorType
{
public:

	virtual std::string GetName() const = 0;

	template<class T>
	auto GetList() const
	{
		static_assert(false, "Invalid type");
	}

	template<>
	auto GetList<PrimaryWeapon>() const
	{
		return GetPrimaryList();
	}

	template<>
	auto GetList<SecondaryWeapon>() const
	{
		return GetSecondaryList();
	}

protected:
	virtual PrimaryGunList GetPrimaryList() const = 0;

	virtual SecondaryGunList GetSecondaryList() const = 0;

public:
	virtual GadgetList GetGadgetList() const = 0;
};