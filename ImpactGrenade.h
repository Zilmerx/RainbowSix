#pragma once

#include "BaseGadget.h"


class ImpactGrenade : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "Impact Grenade";
	}
};