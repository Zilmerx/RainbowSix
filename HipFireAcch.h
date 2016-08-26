#pragma once


struct HipFireAcc
{
	unsigned int val;

	operator unsigned int() const { return val; }

	HipFireAcc(int val)
		: val(val)
	{
	}
};