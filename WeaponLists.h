#pragma once

#include "IncludeAllWeaponDefs.h"

struct WeaponLists
{
	static const std::vector<shared_ptr<BaseGun>> AssaultRifles;
	static const std::vector<shared_ptr<BaseGun>> Handguns;
	static const std::vector<shared_ptr<BaseGun>> LightMachineGuns;
	static const std::vector<shared_ptr<BaseGun>> MachinePistols;
	static const std::vector<shared_ptr<BaseGun>> MarksmanRifles;
	static const std::vector<shared_ptr<BaseGun>> Shields;
	static const std::vector<shared_ptr<BaseGun>> Shotguns;
	static const std::vector<shared_ptr<BaseGun>> SubMachineGuns;

	static const std::vector<shared_ptr<BaseGun>> AllWeapons;

	static void SortByDamage(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->damage() > rhs->damage();
		});
	}

	static void SortByFireRate(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->fireRate() > rhs->fireRate();
		});
	}

	static void SortByMobility(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->mobility() > rhs->mobility();
		});
	}

	static void SortByRecoil(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->recoil() > rhs->recoil();
		});
	}

	static void SortBySpread(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->recoilspread() > rhs->recoilspread();
		});
	}

	static void SortByAmmoCapacity(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->ammoCapacity() > rhs->ammoCapacity();
		});
	}

	static void SortByHipfireAcc(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->hipfireAccuracy() > rhs->hipfireAccuracy();
		});
	}

	static void SortByDPS(std::vector<shared_ptr<BaseGun>>& list)
	{
		std::sort(list.begin(), list.end(),
			[](const shared_ptr<BaseGun>& lhs, const shared_ptr<BaseGun>& rhs) ->bool
		{
			return lhs->DPS() > rhs->DPS();
		});
	}

};

const std::vector<shared_ptr<BaseGun>> WeaponLists::AssaultRifles =
{
	make_shared<Gun_L85A2>(),
	make_shared<Gun_AR33>(),
	make_shared<Gun_G36C>(),
	make_shared<Gun_R4_C>(),
	make_shared<Gun_556xi>(),
	make_shared<Gun_416_C_Carbine>(),
	make_shared<Gun_AUG_A2>(),
	make_shared<Gun_552_Commando>(),
	make_shared<Gun_F2>(),
	make_shared<Gun_AK_12>(),
	make_shared<Gun_C8_SFW>(),
	make_shared<Gun_Mk17_CQB>(),
	make_shared<Gun_PARA_308>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::Handguns =
{
	make_shared<Gun_P226_Mk_25>(),
	make_shared<Gun_M45_MEUSOC>(),
	make_shared<Gun_57_USG>(),
	make_shared<Gun_P12>(),
	make_shared<Gun_P9>(),
	make_shared<Gun_LFP586>(),
	make_shared<Gun_PMM>(),
	make_shared<Gun_GSH_18>(),
	make_shared<Gun_Mk1_9mm>(),
	make_shared<Gun_D_50>(),
	make_shared<Gun_PRB92>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::LightMachineGuns =
{
	make_shared<Gun_G8A1>(),
	make_shared<Gun_6P41>(),
	make_shared<Gun_M249>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::MachinePistols =
{
	make_shared<Gun_SMG_11>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::MarksmanRifles =
{
	make_shared<Gun_417>(),
	make_shared<Gun_OTs_03>(),
	make_shared<Gun_CAMRS>(),
	make_shared<Gun_SR_25>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::Shields =
{
	make_shared<Gun_LeRock>(),
	make_shared<Gun_Ballistic_Shield>(),
	make_shared<Gun_Flash_Shield>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::Shotguns =
{
	make_shared<Gun_M590A1>(),
	make_shared<Gun_M1014>(),
	make_shared<Gun_M870>(),
	make_shared<Gun_SG_CQB>(),
	make_shared<Gun_SASG_12>(),
	make_shared<Gun_Super_90>(),
	make_shared<Gun_SPAS_12>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::SubMachineGuns =
{
	make_shared<Gun_FMG_9>(),
	make_shared<Gun_MP5K>(),
	make_shared<Gun_UMP45>(),
	make_shared<Gun_MP7>(),
	make_shared<Gun_P90>(),
	make_shared<Gun_MP5>(),
	make_shared<Gun_9x19VSN>(),
	make_shared<Gun_9mm_C1>(),
	make_shared<Gun_MPX>()
};

const std::vector<shared_ptr<BaseGun>> WeaponLists::AllWeapons =
{
	make_shared<Gun_L85A2>(),
	make_shared<Gun_AR33>(),
	make_shared<Gun_G36C>(),
	make_shared<Gun_R4_C>(),
	make_shared<Gun_556xi>(),
	make_shared<Gun_416_C_Carbine>(),
	make_shared<Gun_AUG_A2>(),
	make_shared<Gun_552_Commando>(),
	make_shared<Gun_F2>(),
	make_shared<Gun_AK_12>(),
	make_shared<Gun_C8_SFW>(),
	make_shared<Gun_Mk17_CQB>(),
	//
	make_shared<Gun_P226_Mk_25>(),
	make_shared<Gun_M45_MEUSOC>(),
	make_shared<Gun_57_USG>(),
	make_shared<Gun_P12>(),
	make_shared<Gun_P9>(),
	make_shared<Gun_LFP586>(),
	make_shared<Gun_PMM>(),
	make_shared<Gun_GSH_18>(),
	make_shared<Gun_Mk1_9mm>(),
	make_shared<Gun_D_50>(),
	//
	make_shared<Gun_G8A1>(),
	make_shared<Gun_6P41>(),
	//
	make_shared<Gun_SMG_11>(),
	//
	make_shared<Gun_417>(),
	make_shared<Gun_OTs_03>(),
	make_shared<Gun_CAMRS>(),
	make_shared<Gun_SR_25>(),
	//
	make_shared<Gun_LeRock>(),
	make_shared<Gun_Ballistic_Shield>(),
	make_shared<Gun_Flash_Shield>(),
	//
	make_shared<Gun_M590A1>(),
	make_shared<Gun_M1014>(),
	make_shared<Gun_M870>(),
	make_shared<Gun_SG_CQB>(),
	make_shared<Gun_SASG_12>(),
	make_shared<Gun_Super_90>(),
	make_shared<Gun_SPAS_12>(),
	//
	make_shared<Gun_FMG_9>(),
	make_shared<Gun_MP5K>(),
	make_shared<Gun_UMP45>(),
	make_shared<Gun_MP7>(),
	make_shared<Gun_P90>(),
	make_shared<Gun_MP5>(),
	make_shared<Gun_9x19VSN>(),
	make_shared<Gun_9mm_C1>(),
	make_shared<Gun_MPX>()
};
