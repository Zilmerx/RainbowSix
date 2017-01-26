#pragma once

#include "OperatorType.h"

struct Smoke : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Smoke";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_FMG_9>(),
			std::make_shared<Gun_M590A1>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P226_Mk_25>(),
			std::make_shared<Gun_SMG_11>(),
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