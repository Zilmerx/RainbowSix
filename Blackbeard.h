#pragma once

#include "OperatorType.h"

struct Blackbeard : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Blackbeard";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_Mk17_CQB>(),
			std::make_shared<Gun_SR_25>(),
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
			std::make_shared<BreachingCharge>(),
			std::make_shared<StunGrenade>(),
		};
	}
};