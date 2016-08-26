#pragma once
#include "BaseAttachment.h"
#include "BaseWeapon.h"

class WeaponContainer
{
public:
	const std::string	m_name;

	const Damage		m_damage;
	const FireRate		m_fire_rate;

	const Mobility		m_mobility;

	const Recoil		m_recoil;
	const Spread		m_spread;

	Ammo				m_ammo;
	const AmmoCapacity	m_ammo_capacity;

	const HipFireAcc	m_hipfireAcc;

	WeaponContainer(shared_ptr<BaseGun> weapon) :
		m_name{ weapon->name() },
		// Ark :(
		m_damage{ weapon->GetSights()->damageMod(weapon->GetBarrel()->damageMod(weapon->GetGrip()->damageMod(weapon->GetUnderBarrel()->damageMod(weapon->damage())))) },
		m_fire_rate{ weapon->GetSights()->fireRateMod(weapon->GetBarrel()->fireRateMod(weapon->GetGrip()->fireRateMod(weapon->GetUnderBarrel()->fireRateMod(weapon->fireRate())))) },
		m_mobility{ weapon->GetSights()->mobilityMod(weapon->GetBarrel()->mobilityMod(weapon->GetGrip()->mobilityMod(weapon->GetUnderBarrel()->mobilityMod(weapon->mobility())))) },
		m_recoil{ weapon->GetSights()->recoilMod(weapon->GetBarrel()->recoilMod(weapon->GetGrip()->recoilMod(weapon->GetUnderBarrel()->recoilMod(weapon->recoil())))) },
		m_spread{ weapon->GetSights()->spreadMod(weapon->GetBarrel()->spreadMod(weapon->GetGrip()->spreadMod(weapon->GetUnderBarrel()->spreadMod(weapon->recoilspread())))) },
		m_ammo{ weapon->ammoCapacity() },
		m_ammo_capacity{ weapon->ammoCapacity() },
		m_hipfireAcc{	weapon->GetSights()->hipfireAcMod(	weapon->GetBarrel()->hipfireAcMod(	weapon->GetGrip()->hipfireAcMod(weapon->GetUnderBarrel()->hipfireAcMod(	weapon->hipfireAccuracy())))) }
	{
	}

	void Reload()
	{
		m_ammo.val = m_ammo_capacity.val;
	}


	double DPS() const
	{
		return m_damage / fireDelay();
	}

	double fireDelay() const
	{
		return (60.0 / m_fire_rate);
	}

	std::chrono::microseconds fireDelayMs() const
	{
		// Delay from fireDelay() comes in seconds ( ex : 0.08123 seconds ). 
		// Multiplying by 1'000'000 in order to keep some precision from double -> long long casting.
		return std::chrono::microseconds((long long)(fireDelay() * 1'000'000));
	}



	friend inline bool operator==(const WeaponContainer& lhs, const WeaponContainer& rhs) 
	{ 
		return lhs.m_name == rhs.m_name
			&& lhs.m_damage == rhs.m_damage
			&& lhs.m_fire_rate == rhs.m_fire_rate
			&& lhs.m_mobility == rhs.m_mobility
			&& lhs.m_recoil == rhs.m_recoil
			&& lhs.m_spread == rhs.m_spread
			&& lhs.m_ammo_capacity == rhs.m_ammo_capacity
			&& lhs.m_hipfireAcc == rhs.m_hipfireAcc;
	}

	friend inline bool operator!=(const WeaponContainer& lhs, const WeaponContainer& rhs) 
	{ 
		return !(lhs == rhs); 
	}

	friend std::ostream& operator<<(std::ostream& os, const WeaponContainer& obj)
	{
		return os  
			<< Language::GetText("KEY_DAMAGE:") << obj.m_damage << endl
			<< Language::GetText("KEY_FIRERATE:") << obj.m_fire_rate << endl
			<< Language::GetText("KEY_MOBILITY:") << obj.m_mobility << endl
			<< Language::GetText("KEY_RECOIL:") << obj.m_recoil << endl
			<< Language::GetText("KEY_SPREAD:") << obj.m_spread << endl
			<< Language::GetText("KEY_AMMOCAP:") << obj.m_ammo_capacity << endl
			<< Language::GetText("KEY_HIPFIRE:") << obj.m_hipfireAcc << endl;
	}

};