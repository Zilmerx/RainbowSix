#pragma once

#include "PrimaryGunListGenerator.h"
#include "SecondaryGunListGenerator.h"

struct WeaponListFinder
{
	template<typename OperatorTag>
	static PrimaryGunList& getPrimary()
	{
		static auto list = PrimaryGunListGenerator::generate<OperatorTag>();
		return list;
	}

	template<typename OperatorTag>
	static SecondaryGunList& getSecondary()
	{
		static auto list = SecondaryGunListGenerator::generate<OperatorTag>();
		return list;
	}

};