#pragma once

#include "OperatorType.h"

struct Valkyrie : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Valkyrie";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_MPX>(),
			std::make_shared<Gun_SPAS_12>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_D_50>(),
		};
	}

	virtual GadgetList GetGadgetList() const override
	{
		return GadgetList
		{
			std::make_shared<C4Explosive>(),
			std::make_shared<DeployableShield>(),
		};
	}
};