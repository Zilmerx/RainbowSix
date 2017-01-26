#pragma once

#include "OperatorType.h"

struct Doc : public OperatorType, public HeavyArmorOp, public LowSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Doc";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_P90>(),
			std::make_shared<Gun_MP5>(),
			std::make_shared<Gun_SG_CQB>(),
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
			std::make_shared<DeployableShield>(),
			std::make_shared<BarbedWire>(),
		};
	}
};