#pragma once

#include "OperatorType.h"

struct Sledge : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Sledge";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_L85A2>(),
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
};