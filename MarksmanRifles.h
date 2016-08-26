#pragma once

#include "BaseWeapon.h"



class Gun_417 : public BaseMarksmanRifle
{
public:
	virtual std::string name() const override
	{
		return "417";
	}

	virtual Damage			damage() const override { return 61; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 38; }
	virtual AmmoCapacity	ammoCapacity() const override { return 10; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Red_Dot>(),
			std::make_shared<Att_Holographic>(),
			std::make_shared<Att_ACOG>()
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Suppressor>(),
			std::make_shared<Att_Flash_Hider>(),
			std::make_shared<Att_Compensator>()
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

class Gun_OTs_03 : public BaseMarksmanRifle
{
public:
	virtual std::string name() const override
	{
		return "OTs-03";
	}

	virtual Damage			damage() const override { return 152; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 36; }
	virtual AmmoCapacity	ammoCapacity() const override { return 10; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
			std::make_shared<Att_Red_Dot>(),
			std::make_shared<Att_Holographic>(),
			std::make_shared<Att_Reflex>()
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

class Gun_CAMRS : public BaseMarksmanRifle
{
public:
	virtual std::string name() const override
	{
		return "CAMRS";
	}

	virtual Damage			damage() const override { return 52; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 39; }
	virtual AmmoCapacity	ammoCapacity() const override { return 20; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
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
			std::make_shared<Att_Suppressor>(),
			std::make_shared<Att_Flash_Hider>(),
			std::make_shared<Att_Compensator>()
		};
	}

	virtual GripList getGripList() const override
	{
		return GripList
		{
		};
	}

	virtual UnderBarrelList getUnderBarrelList() const override
	{
		return UnderBarrelList
		{
			std::make_shared<Att_Laser>()
		};
	}

};

class Gun_SR_25 : public BaseMarksmanRifle
{
public:
	virtual std::string name() const override
	{
		return "SR-25";
	}

	virtual Damage			damage() const override { return 75; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 38; }
	virtual AmmoCapacity	ammoCapacity() const override { return 10; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
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
			std::make_shared<Att_Suppressor>(),
			std::make_shared<Att_Flash_Hider>(),
			std::make_shared<Att_Compensator>()
		};
	}

	virtual GripList getGripList() const override
	{
		return GripList
		{
			std::make_shared<Att_VerticalGrip>()
		};
	}

	virtual UnderBarrelList getUnderBarrelList() const override
	{
		return UnderBarrelList
		{
			std::make_shared<Att_Laser>()
		};
	}

};

