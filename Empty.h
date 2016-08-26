#pragma once

#include "BaseAttachment.h"




class Att_Empty : public BaseSights, public BaseBarrel, public BaseGrip, public BaseUnderBarrel
{
public:
	virtual std::string name() const override
	{
		return "Empty";
	}
};


