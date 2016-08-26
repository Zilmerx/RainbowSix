#pragma once

#include <string>
#include <iostream>

#include "Ammo.h"
#include "AmmoCapacity.h"
#include "Damage.h"
#include "FireRate.h"
#include "Mobility.h"
#include "Recoil.h"
#include "Spread.h"
#include "HipFireAcch.h"

class BaseAttachment
{
public:
	virtual std::string name() const = 0;

	virtual Damage damageMod(Damage oldval) const noexcept
	{
		return oldval;
	}

	virtual FireRate fireRateMod(FireRate oldval) const noexcept
	{
		return oldval;
	}

	virtual Mobility mobilityMod(Mobility oldval) const noexcept
	{
		return oldval;
	}

	virtual Recoil recoilMod(Recoil oldval) const noexcept
	{
		return oldval;
	}

	virtual Spread spreadMod(Spread oldval) const noexcept
	{
		return oldval;
	}

	virtual HipFireAcc hipfireAcMod(HipFireAcc oldval) const noexcept
	{
		return oldval;
	}

	friend std::ostream& operator<<(std::ostream& os, const BaseAttachment& obj)
	{
		return os << obj.name();
	}
};

class BaseSights		: public BaseAttachment {};
class BaseBarrel		: public BaseAttachment {};
class BaseGrip			: public BaseAttachment {};
class BaseUnderBarrel	: public BaseAttachment {};