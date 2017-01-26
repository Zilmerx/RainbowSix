#pragma once

#include "OperatorType.h"

struct Mute : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Mute";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_MP5K>(),
			std::make_shared<Gun_M590A1>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P226_Mk_25>(),
		};
	}

	virtual GadgetList GetGadgetList() const override
	{
		return GadgetList
		{
			std::make_shared<DeployableShield>(),
			std::make_shared<C4Explosive>(),
		};
	}
};