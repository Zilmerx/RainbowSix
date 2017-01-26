#pragma once

#include "BaseGadget.h"


class Grenade : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "Grenade";
	}
};