#pragma once

#include "BaseWeapon.h"


class Gun_FMG_9 : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "FMG-9";
	}

	virtual Damage			damage() const override { return 33; }
	virtual FireRate		fireRate() const override { return 800; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 30; }

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

class Gun_MP5K : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "MP5K";
	}

	virtual Damage			damage() const override { return 31; }
	virtual FireRate		fireRate() const override { return 800; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 30; }

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
			std::make_shared<Att_Flash_Hider>(),
			std::make_shared<Att_Compensator>()
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
			std::make_shared<Att_Laser>()
		};
	}

};

class Gun_UMP45 : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "UMP45";
	}

	virtual Damage			damage() const override { return 38; }
	virtual FireRate		fireRate() const override { return 600; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 25; }

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

class Gun_MP7 : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "MP7";
	}

	virtual Damage			damage() const override { return 36; }
	virtual FireRate		fireRate() const override { return 750; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 30; }

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

class Gun_P90 : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "P90";
	}

	virtual Damage			damage() const override { return 28; }
	virtual FireRate		fireRate() const override { return 970; }
	virtual Mobility		mobility() const override { return 45; }
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

class Gun_MP5 : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "MP5";
	}

	virtual Damage			damage() const override { return 33; }
	virtual FireRate		fireRate() const override { return 800; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 30; }

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

class Gun_9x19VSN : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "9x19VSN";
	}

	virtual Damage			damage() const override { return 36; }
	virtual FireRate		fireRate() const override { return 750; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 30; }

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

class Gun_9mm_C1 : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "9mm C1";
	}

	virtual Damage			damage() const override { return 38; }
	virtual FireRate		fireRate() const override { return 575; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 34; }

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
			std::make_shared<Att_Suppressor>()
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
			std::make_shared<Att_Laser>()
		};
	}

};

class Gun_MPX : public BaseSubMachineGun
{
public:
	virtual std::string name() const override
	{
		return "MPX";
	}

	virtual Damage			damage() const override { return 32; }
	virtual FireRate		fireRate() const override { return 970; }
	virtual Mobility		mobility() const override { return 45; }
	virtual AmmoCapacity	ammoCapacity() const override { return 30; }

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