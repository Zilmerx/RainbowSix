#pragma once

#include "BaseGadget.h"


class C4Explosive : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "C4 Explosive";
	}
};