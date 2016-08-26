#pragma once


struct AmmoCapacity
{
	unsigned int val;

	operator unsigned int() const { return val; }

	AmmoCapacity(int val)
		: val(val)
	{
	}
};