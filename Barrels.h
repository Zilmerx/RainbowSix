#pragma once

#include "BaseAttachment.h"

class Att_Suppressor : public BaseBarrel
{
public:
	virtual std::string name() const override
	{
		return "Suppressor";
	}

	virtual Damage damageMod(Damage oldval) const noexcept override
	{
		return oldval * 0.85;
	}
};

class Att_Flash_Hider : public BaseBarrel
{
public:
	virtual std::string name() const override
	{
		return "Flash hider";
	}

	virtual Recoil recoilMod(Recoil oldval) const noexcept override
	{
		return oldval * 0.8;
	}
};

class Att_Compensator : public BaseBarrel
{
public:
	virtual std::string name() const override
	{
		return "Compensator";
	}

	virtual Spread spreadMod(Spread oldval) const noexcept override
	{
		return oldval * 0.8;
	}
};