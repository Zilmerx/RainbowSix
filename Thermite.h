#pragma once

#include "OperatorType.h"

struct Thermite : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Thermite";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_M1014>(),
			std::make_shared<Gun_556xi>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_M45_MEUSOC>(),
			std::make_shared<Gun_57_USG>(),
		};
	}

	virtual GadgetList GetGadgetList() const override
	{
		return GadgetList
		{
			std::make_shared<BreachingCharge>(),
			std::make_shared<StunGrenade>(),
		};
	}
};