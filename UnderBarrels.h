#pragma once

#include "BaseAttachment.h"

class Att_Laser : public BaseUnderBarrel
{
public:
	virtual std::string name() const override
	{
		return "Laser";
	}

	virtual HipFireAcc hipfireAcMod(HipFireAcc oldval) const noexcept override
	{
		return oldval * 0.8;
	}
};