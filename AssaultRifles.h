#pragma once

#include "BaseWeapon.h"


class Gun_L85A2 : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "L85A2";
	}

	virtual Damage			damage() const override { return 45; }
	virtual FireRate		fireRate() const override { return 670; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_AR33 : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "AR33";
	}

	virtual Damage			damage() const override { return 42; }
	virtual FireRate		fireRate() const override { return 749; }
	virtual Mobility		mobility() const override { return 40; }
	virtual AmmoCapacity	ammoCapacity() const override { return 25; }

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

class Gun_G36C : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "G36C";
	}

	virtual Damage			damage() const override { return 38; }
	virtual FireRate		fireRate() const override { return 780; }
	virtual Mobility		mobility() const override { return 41; }
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

class Gun_R4_C : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "R4-C";
	}

	virtual Damage			damage() const override { return 41; }
	virtual FireRate		fireRate() const override { return 860; }
	virtual Mobility		mobility() const override { return 41; }
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

class Gun_556xi : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "556xi";
	}

	virtual Damage			damage() const override { return 46; }
	virtual FireRate		fireRate() const override { return 690; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_416_C_Carbine : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "416-C Carbine";
	}

	virtual Damage			damage() const override { return 42; }
	virtual FireRate		fireRate() const override { return 700; }
	virtual Mobility		mobility() const override { return 41; }
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

class Gun_AUG_A2 : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "AUG A2";
	}

	virtual Damage			damage() const override { return 41; }
	virtual FireRate		fireRate() const override { return 770; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_552_Commando : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "552 Commando";
	}

	virtual Damage			damage() const override { return 47; }
	virtual FireRate		fireRate() const override { return 690; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_F2 : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "F2";
	}

	virtual Damage			damage() const override { return 39; }
	virtual FireRate		fireRate() const override { return 980; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_AK_12 : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "AK-12";
	}

	virtual Damage			damage() const override { return 44; }
	virtual FireRate		fireRate() const override { return 850; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_C8_SFW : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "C8-SFW";
	}

	virtual Damage			damage() const override { return 42; }
	virtual FireRate		fireRate() const override { return 837; }
	virtual Mobility		mobility() const override { return 40; }
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

class Gun_Mk17_CQB : public BaseAssaultRifle
{
public:
	virtual std::string name() const override
	{
		return "Mk17 CQB";
	}

	virtual Damage			damage() const override { return 52; }
	virtual FireRate		fireRate() const override { return 585; }
	virtual Mobility		mobility() const override { return 40; }
	virtual AmmoCapacity	ammoCapacity() const override { return 20; }

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