#pragma once


struct Ammo
{
	unsigned int val;

	operator unsigned int() const { return val; }

	Ammo(int val)
		: val(val)
	{
	}
};