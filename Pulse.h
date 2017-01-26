#pragma once

#include "OperatorType.h"

struct Pulse : public OperatorType, public LightArmorOp, public HighSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Pulse";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_M1014>(),
			std::make_shared<Gun_UMP45>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_M45_MEUSOC>(),
			std::make_shared<Gun_57_USG>(),
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