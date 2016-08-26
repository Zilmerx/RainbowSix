#pragma once

#include "BaseWeapon.h"

class Gun_P226_Mk_25 : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "P226 Mk 25";
	}

	virtual Damage			damage() const override { return 50; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 15; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_M45_MEUSOC : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "M45 MEUSOC";
	}	
	
	virtual Damage			damage() const override { return 47; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_57_USG : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "5.7 USG";
	}

	virtual Damage			damage() const override { return 36; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 20; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_P12 : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "P12";
	}

	virtual Damage			damage() const override { return 45; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 15; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_P9 : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "P9";
	}

	virtual Damage			damage() const override { return 38; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 16; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_LFP586 : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "LFP586";
	}

	virtual Damage			damage() const override { return 60; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_PMM : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "PMM";
	}

	virtual Damage			damage() const override { return 55; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 8; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_GSH_18 : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "GHS-18";
	}

	virtual Damage			damage() const override { return 39; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 18; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>(),
			std::make_unique<Att_Compensator>()
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

class Gun_Mk1_9mm : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "Mk1 9mm";
	}

	virtual Damage			damage() const override { return 45; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 13; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>(),
			std::make_unique<Att_Suppressor>()
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
			std::make_unique<Att_Laser>()
		};
	}

};

class Gun_D_50 : public BaseHandgun
{
public:
	virtual std::string name() const override
	{
		return "D-50";
	}

	virtual Damage			damage() const override { return 60; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 50; }
	virtual AmmoCapacity	ammoCapacity() const override { return 7; }

	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>(),
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
			std::make_unique<Att_Laser>()
		};
	}

};