#pragma once

#include "TypeDefs.h"
#include "Incopiable.h"

#include "OperatorTags.h"
#include "AllWeaponDefs.h"

class PrimaryGunListGenerator : Incopiable
{
private:

	PrimaryGunListGenerator() = default; // constructeur privé

public:

	// Si le type n'est pas implémenté.
	template<typename OperatorTag>
	static PrimaryGunList generate()
	{
		static_assert(false, "Operator<T> : Invalid operator type.");
	}

	//////////////////////////////////////
	// SAS
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_SLEDGE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_L85A2>(),
			std::make_shared<Gun_M590A1>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_THATCHER>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_AR33>(),
			std::make_shared<Gun_L85A2>(),
			std::make_shared<Gun_M590A1>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_SMOKE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_FMG_9>(),
			std::make_shared<Gun_M590A1>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_MUTE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_MP5K>(),
			std::make_shared<Gun_M590A1>(),
		};
	}

	//////////////////////////////////////
	// FBI
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_ASH>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_G36C>(),
			std::make_shared<Gun_R4_C>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_THERMITE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_M1014>(),
			std::make_shared<Gun_556xi>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_PULSE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_M1014>(),
			std::make_shared<Gun_UMP45>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_CASTLE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_M1014>(),
			std::make_shared<Gun_UMP45>(),
		};
	}

	//////////////////////////////////////
	// GIGN
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_MONTAGNE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_LeRock>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_TWITCH>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_F2>(),
			std::make_shared<Gun_417>(),
			std::make_shared<Gun_SG_CQB>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_ROOK>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_P90>(),
			std::make_shared<Gun_MP5>(),
			std::make_shared<Gun_SG_CQB>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_DOC>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_P90>(),
			std::make_shared<Gun_MP5>(),
			std::make_shared<Gun_SG_CQB>(),
		};
	}

	//////////////////////////////////////
	// SPETSNAZ
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_GLAZ>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_OTs_03>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_FUZE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_Ballistic_Shield>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_KAPKAN>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_9x19VSN>(),
			std::make_shared<Gun_SASG_12>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_TACHANKA>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_9x19VSN>(),
			std::make_shared<Gun_SASG_12>(),
		};
	}

	//////////////////////////////////////
	// GSG9
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_BLITZ>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_Flash_Shield>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_IQ>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_AUG_A2>(),
			std::make_shared<Gun_552_Commando>(),
			std::make_shared<Gun_G8A1>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_BANDIT>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_MP7>(),
			std::make_shared<Gun_M870>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_JAEGER>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_416_C_Carbine>(),
			std::make_shared<Gun_M870>(),
		};
	}

	//////////////////////////////////////
	// JTF2
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_BUCK>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_C8_SFW>(),
			std::make_shared<Gun_CAMRS>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_FROST>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_Super_90>(),
			std::make_shared<Gun_9mm_C1>(),
		};
	}

	//////////////////////////////////////
	// NAVY
	//////////////////////////////////////

	template<>
	static PrimaryGunList generate<Tag_BLACKBEARD>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_Mk17_CQB>(),
			std::make_shared<Gun_SR_25>(),
		};
	}

	template<>
	static PrimaryGunList generate<Tag_VALKYRIE>()
	{
		return PrimaryGunList
		{
			std::make_shared<Gun_MPX>(),
			std::make_shared<Gun_SPAS_12>(),
		};
	}
};