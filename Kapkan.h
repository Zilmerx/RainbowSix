#pragma once

#include "OperatorType.h"

struct Kapkan : public OperatorType, public HeavyArmorOp, public LowSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Kapkan";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_9x19VSN>(),
			std::make_shared<Gun_SASG_12>(),
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
			std::make_shared<BarbedWire>(),
			std::make_shared<C4Explosive>(),
		};
	}
};