#pragma once

#include "BaseGadget.h"


class BarbedWire : public BaseGadget 
{
	virtual std::string GetName() const override
	{
		return "Barbed wire";
	}
};