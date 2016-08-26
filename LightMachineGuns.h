#pragma once

#include "BaseWeapon.h"


class Gun_G8A1 : public BaseLightMachineGun
{
public:
	virtual std::string name() const override
	{
		return "G8A1";
	}

	virtual Damage			damage() const override { return 37; }
	virtual FireRate		fireRate() const override { return 850; }
	virtual Mobility		mobility() const override { return 35; }
	virtual AmmoCapacity	ammoCapacity() const override { return 50; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Red_Dot>(),
			std::make_shared<Att_Holographic>(),
			std::make_shared<Att_Reflex>(),
			std::make_shared<Att_ACOG>()
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Suppressor>(),
			std::make_shared<Att_Flash_Hider>()
		};
	}

	virtual GripList getGripList() const override
	{
		return GripList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_VerticalGrip>()
		};
	}

	virtual UnderBarrelList getUnderBarrelList() const override
	{
		return UnderBarrelList
		{
			std::make_shared<Att_Empty>(),
		};
	}

};

class Gun_6P41 : public BaseLightMachineGun
{
public:
	virtual std::string name() const override
	{
		return "6P41";
	}

	virtual Damage			damage() const override { return 39; }
	virtual FireRate		fireRate() const override { return 680; }
	virtual Mobility		mobility() const override { return 35; }
	virtual AmmoCapacity	ammoCapacity() const override { return 100; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Red_Dot>(),
			std::make_shared<Att_Holographic>(),
			std::make_shared<Att_Reflex>(),
			std::make_shared<Att_ACOG>()
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Suppressor>(),
			std::make_shared<Att_Flash_Hider>()
		};
	}

	virtual GripList getGripList() const override
	{
		return GripList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_VerticalGrip>()
		};
	}

	virtual UnderBarrelList getUnderBarrelList() const override
	{
		return UnderBarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Laser>()
		};
	}

};