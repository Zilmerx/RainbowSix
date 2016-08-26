#pragma once


struct Recoil
{
	unsigned int val;

	operator unsigned int() const { return val; }

	Recoil(int val)
		: val(val)
	{
	}
};