#pragma once

#include "BaseWeapon.h"


class Gun_M590A1 : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "M590A1";
	}

	virtual Damage			damage() const override { return 45; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 42; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

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

class Gun_M1014 : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "M1014";
	}

	virtual Damage			damage() const override { return 42; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 42; }
	virtual AmmoCapacity	ammoCapacity() const override { return 8; }

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

class Gun_M870 : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "M870";
	}

	virtual Damage			damage() const override { return 57; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 43; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

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

class Gun_SG_CQB : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "SG_CQB";
	}

	virtual Damage			damage() const override { return 50; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 42; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

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

class Gun_SASG_12 : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "SASG-12";
	}

	virtual Damage			damage() const override { return 47; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 8; }

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

class Gun_Super_90 : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "Super 90";
	}

	virtual Damage			damage() const override { return 42; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 42; }
	virtual AmmoCapacity	ammoCapacity() const override { return 8; }

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

class Gun_SPAS_12 : public BaseShotgun
{
public:
	virtual std::string name() const override
	{
		return "SPAS-12";
	}

	virtual Damage			damage() const override { return 50; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 42; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Red_Dot>(),
			std::make_shared<Att_Holographic>(),
			std::make_shared<Att_Reflex>()
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
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