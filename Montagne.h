#pragma once

#include "OperatorType.h"

struct Montagne : public OperatorType, public HeavyArmorOp, public LowSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Montagne";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_LeRock>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P9>(),
			std::make_shared<Gun_LFP586>(),
		};
	}

	virtual GadgetList GetGadgetList() const override
	{
		return GadgetList
		{
			std::make_shared<StunGrenade>(),
			std::make_shared<SmokeGrenade>(),
		};
	}
};