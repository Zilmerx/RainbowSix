#pragma once

#include "BaseAttachment.h"

class Att_VerticalGrip : public BaseGrip
{
public:
	virtual std::string name() const override
	{
		return "Vertical Grip";
	}

	virtual Recoil recoilMod(Recoil oldval) const noexcept override
	{
		return oldval * 0.80;
	}
};