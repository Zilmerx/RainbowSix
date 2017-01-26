#pragma once

#include "OperatorType.h"

struct Blitz : public OperatorType, public HeavyArmorOp, public LowSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Blitz";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_Flash_Shield>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P12>(),
		};
	}

	virtual GadgetList GetGadgetList() const override
	{
		return GadgetList
		{
			std::make_shared<BreachingCharge>(),
			std::make_shared<SmokeGrenade>(),
		};
	}
};