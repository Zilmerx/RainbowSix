#pragma once

#include "OperatorType.h"

struct Bandit : public OperatorType, public LightArmorOp, public HighSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Bandit";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_MP7>(),
			std::make_shared<Gun_M870>(),
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
			std::make_shared<C4Explosive>(),
			std::make_shared<BarbedWire>(),
		};
	}
};