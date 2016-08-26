#pragma once


struct Damage
{
	unsigned int val;

	operator unsigned int() const { return val; }

	Damage(int val)
		: val(val)
	{
	}
};