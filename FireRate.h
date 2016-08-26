#pragma once


struct FireRate
{
	unsigned int val;

	operator unsigned int() const { return val; }

	FireRate(int val)
		: val(val)
	{
	}
};