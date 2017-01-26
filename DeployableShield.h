#pragma once

#include "BaseGadget.h"


class DeployableShield : public BaseGadget
{
	virtual std::string GetName() const override
	{
		return "Deployable Shield";
	}
};