#pragma once

#include "OperatorType.h"

struct Glaz : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
public:
	virtual std::string GetName() const override
	{
		return "Glaz";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_OTs_03>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_GSH_18>(),
			std::make_shared<Gun_PMM>(),
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