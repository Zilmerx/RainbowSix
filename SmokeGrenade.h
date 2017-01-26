#pragma once

#include "BaseGadget.h"


class SmokeGrenade : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "Smoke Grenade";
	}
};