#pragma once

#include "BaseGadget.h"


class Claymore : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "Claymore";
	}
};