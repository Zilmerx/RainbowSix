#pragma once

#include "OperatorType.h"

struct Capitao : public OperatorType, public LightArmorOp, public HighSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Capitao";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_PARA_308>(),
			std::make_shared<Gun_M249>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_PRB92>(),
		};
	}

	virtual GadgetList GetGadgetList() const override
	{
		return GadgetList
		{
			std::make_shared<Grenade>(),
			std::make_shared<StunGrenade>(),
		};
	}
};