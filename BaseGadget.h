#pragma once

#include <string>

class BaseGadget 
{
public:
	virtual std::string GetName() const = 0;
};