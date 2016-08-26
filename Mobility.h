#pragma once


struct Mobility
{
	unsigned int val;

	operator unsigned int() const { return val; }

	Mobility(int val)
		: val(val)
	{
	}
};