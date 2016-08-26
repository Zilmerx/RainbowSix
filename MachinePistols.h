#pragma once

#include "BaseWeapon.h"

class Gun_SMG_11 : public BaseMachinePistol
{
public:
	virtual std::string name() const override
	{
		return "SMG-11";
	}

	virtual Damage			damage() const override { return 32; }
	virtual FireRate		fireRate() const override { return 1270; }
	virtual Mobility		mobility() const override { return 48; }
	virtual AmmoCapacity	ammoCapacity() const override { return 16; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Red_Dot>(),
			std::make_unique<Att_Holographic>(),
			std::make_unique<Att_Reflex>(),
			std::make_unique<Att_ACOG>()
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>(),
			std::make_unique<Att_Flash_Hider>(),
			std::make_unique<Att_Compensator>()
		};
	}

	virtual GripList getGripList() const override
	{
		return GripList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_VerticalGrip>()
		};
	}

	virtual UnderBarrelList getUnderBarrelList() const override
	{
		return UnderBarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Laser>()
		};
	}

};