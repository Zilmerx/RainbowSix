#pragma once

#include "BaseGadget.h"


class StunGrenade : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "Stun Grenade";
	}
};