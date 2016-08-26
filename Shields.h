#pragma once

#include "BaseWeapon.h"


class Gun_LeRock : public BaseShield
{
public:
	virtual std::string name() const override
	{
		return "Le Rock";
	}
};

class Gun_Ballistic_Shield : public BaseShield
{
public:
	virtual std::string name() const override
	{
		return "Ballistic Shield";
	}
};

class Gun_Flash_Shield : public BaseShield
{
public:
	virtual std::string name() const override
	{
		return "G52-Tactical Shield";
	}
};