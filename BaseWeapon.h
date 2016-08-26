#pragma once

#include <string>
#include <chrono>

#include "IncludeAllAttachments.h"

#include "Language.h"

class BaseGun
{
private:

	shared_ptr<BaseSights>			m_sights;
	shared_ptr<BaseBarrel>			m_barrel;
	shared_ptr<BaseGrip>			m_grip;
	shared_ptr<BaseUnderBarrel>		m_underbarrel;

public:

	BaseGun() :
		m_sights		{ std::make_shared<Att_Empty>() },
		m_barrel		{ std::make_shared<Att_Empty>() },
		m_grip			{ std::make_shared<Att_Empty>() },
		m_underbarrel	{ std::make_shared<Att_Empty>() }
	{
	}

	void SetSights(size_t indiceTableau)
	{
		auto list = getSightsList();
		if (indiceTableau >= 0 && indiceTableau < list.size())
		{
			m_sights = list[indiceTableau];
		}
		else
		{
			m_sights = std::make_shared<Att_Empty>();
		}
	}
	void SetBarrel(size_t indiceTableau)
	{
		auto list = getBarrelList();
		if (indiceTableau >= 0 && indiceTableau < list.size())
		{
			m_barrel = list[indiceTableau];
		}
		else
		{
			m_barrel = std::make_shared<Att_Empty>();
		}
	}
	void SetGrip(size_t indiceTableau)
	{
		auto list = getGripList();
		if (indiceTableau >= 0 && indiceTableau < list.size())
		{
			m_grip = list[indiceTableau];
		}
		else
		{
			m_grip = std::make_shared<Att_Empty>();
		}
	}
	void SetUnderBarrel(size_t indiceTableau)
	{
		auto list = getUnderBarrelList();
		if (indiceTableau >= 0 && indiceTableau < list.size())
		{
			m_underbarrel = list[indiceTableau];
		}
		else
		{
			m_underbarrel = std::make_shared<Att_Empty>();
		}
	}

	const shared_ptr<BaseSights>& GetSights() const
	{
		return m_sights;
	}
	const shared_ptr<BaseBarrel>& GetBarrel() const
	{
		return m_barrel;
	}
	const shared_ptr<BaseGrip>& GetGrip() const
	{
		return m_grip;
	}
	const shared_ptr<BaseUnderBarrel>& GetUnderBarrel() const
	{
		return m_underbarrel;
	}


	virtual std::string name() const = 0;

	// Fonctions devraient être abstraites, but lazy.
	virtual Damage			damage() const = 0;
	virtual FireRate		fireRate() const = 0;
	virtual Mobility		mobility() const = 0;
	virtual Recoil			recoil() const { return 100; }
	virtual Spread			recoilspread() const { return 100; }
	virtual AmmoCapacity	ammoCapacity() const = 0;
	virtual HipFireAcc		hipfireAccuracy() const { return 100; }

	double DPS() const noexcept
	{
		return damage() / fireDelay();
	}

	double fireDelay() const noexcept
	{
		return (60.0 / fireRate());
	}
	
	std::chrono::microseconds fireDelayMs() const noexcept
	{
		// Delay from fireDelay() comes in seconds ( ex : 0.08123 seconds ). 
		// Multiplying by 1'000'000 in order to keep some precision from double to long long casting.
		return std::chrono::microseconds((long long)(fireDelay() * 1'000'000));
	}

	friend std::ostream& operator<<(std::ostream& os, const BaseGun& obj)
	{
		os  << obj.name() << endl
			<< "------------------------" << endl
			<< Language::GetText("KEY_SIGHTS") << ": " << *obj.m_sights << endl
			<< Language::GetText("KEY_BARREL") << ": " << *obj.m_barrel << endl
			<< Language::GetText("KEY_GRIP") << ": " << *obj.m_grip << endl
			<< Language::GetText("KEY_UNDERBARREL") << ": " << *obj.m_underbarrel << endl;

		return os;
	}

	virtual SightsList		getSightsList()			const = 0;
	virtual BarrelList		getBarrelList()			const = 0;
	virtual GripList		getGripList()			const = 0;
	virtual UnderBarrelList getUnderBarrelList()	const = 0;
};

class PrimaryWeapon		: public BaseGun {};
class SecondaryWeapon	: public BaseGun {};

class BaseAssaultRifle		: public PrimaryWeapon {};
class BaseSubMachineGun		: public PrimaryWeapon {};
class BaseShotgun			: public PrimaryWeapon {};
class BaseMarksmanRifle		: public PrimaryWeapon {};
class BaseLightMachineGun	: public PrimaryWeapon {};

class BaseShield			: public PrimaryWeapon 
{


	virtual SightsList getSightsList() const override
	{
		return SightsList
		{
			std::make_shared<Att_Empty>()
		};
	}

	virtual BarrelList getBarrelList() const override
	{
		return BarrelList
		{
			std::make_shared<Att_Empty>()
		};
	}

	virtual GripList getGripList() const override
	{
		return GripList
		{
			std::make_shared<Att_Empty>()
		};
	}

	virtual UnderBarrelList getUnderBarrelList() const override
	{
		return UnderBarrelList
		{
			std::make_shared<Att_Empty>()
		};
	}

	virtual Damage			damage() const override { return 1; }
	virtual FireRate		fireRate() const override { return 1; }
	virtual Mobility		mobility() const override { return 1; }
	virtual AmmoCapacity	ammoCapacity() const override { return 1; }

};

class BaseHandgun			: public SecondaryWeapon {};
class BaseMachinePistol		: public SecondaryWeapon {};