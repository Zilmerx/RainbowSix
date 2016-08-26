#pragma once

#include "OperatorType.h"

struct Twitch : public OperatorType, public MediumArmorOp, public MediumSpeedOp
{
	virtual std::string GetName() const override
	{
		return "Twitch";
	}

	virtual PrimaryGunList GetPrimaryList() const override
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_F2>(),
			std::make_shared<Gun_417>(),
			std::make_shared<Gun_SG_CQB>(),
		};
	}

	virtual SecondaryGunList GetSecondaryList() const override
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P9>(),
			std::make_shared<Gun_LFP586>(),
		};
	}
};