#pragma once


struct Spread
{
	unsigned int val;

	operator unsigned int() const { return val; }

	Spread(int val)
		: val(val)
	{
	}
};