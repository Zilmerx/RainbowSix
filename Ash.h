#pragma once

#include "OperatorType.h"

struct Ash : public OperatorType, public LightArmorOp, public HighSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Ash";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_G36C>(),
			std::make_shared<Gun_R4_C>(),
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
};