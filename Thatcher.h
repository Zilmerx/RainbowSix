#pragma once

#include "OperatorType.h"

struct Thatcher : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Thatcher";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_AR33>(),
			std::make_shared<Gun_L85A2>(),
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
			std::make_shared<BreachingCharge>(),
			std::make_shared<StunGrenade>(),
		};
	}
};