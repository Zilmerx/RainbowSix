#pragma once

#include "TypeDefs.h"
#include "Incopiable.h"

#include "OperatorTags.h"
#include "AllWeaponDefs.h"

class SecondaryGunListGenerator : Incopiable
{
private:

	SecondaryGunListGenerator() = default; // constructeur privé

public:

	template <typename OperatorTag>
	static SecondaryGunList generate()
	{
		static_assert(false, "Operator<T> : Invalid operator type.");
	}

	//////////////////////////////////////
	// SAS
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_SLEDGE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P226_Mk_25>(),
			std::make_shared<Gun_SMG_11>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_THATCHER>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P226_Mk_25>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_SMOKE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P226_Mk_25>(),
			std::make_shared<Gun_SMG_11>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_MUTE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P226_Mk_25>(),
		};
	}

	//////////////////////////////////////
	// FBI
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_ASH>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_M45_MEUSOC>(),
			std::make_shared<Gun_57_USG>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_THERMITE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_M45_MEUSOC>(),
			std::make_shared<Gun_57_USG>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_PULSE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_M45_MEUSOC>(),
			std::make_shared<Gun_57_USG>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_CASTLE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_M45_MEUSOC>(),
			std::make_shared<Gun_57_USG>(),
		};
	}

	//////////////////////////////////////
	// GIGN
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_MONTAGNE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P9>(),
			std::make_shared<Gun_LFP586>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_TWITCH>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P9>(),
			std::make_shared<Gun_LFP586>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_ROOK>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P9>(),
			std::make_shared<Gun_LFP586>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_DOC>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P9>(),
			std::make_shared<Gun_LFP586>(),
		};
	}

	//////////////////////////////////////
	// SPETSNAZ
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_GLAZ>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_GSH_18>(),
			std::make_shared<Gun_PMM>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_FUZE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_GSH_18>(),
			std::make_shared<Gun_PMM>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_KAPKAN>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_GSH_18>(),
			std::make_shared<Gun_PMM>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_TACHANKA>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_GSH_18>(),
			std::make_shared<Gun_PMM>(),
		};
	}

	//////////////////////////////////////
	// GSG9
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_BLITZ>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P12>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_IQ>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P12>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_BANDIT>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P12>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_JAEGER>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_P12>(),
		};
	}

	//////////////////////////////////////
	// JTF2
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_BUCK>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_Mk1_9mm>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_FROST>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_Mk1_9mm>(),
		};
	}

	//////////////////////////////////////
	// NAVY
	//////////////////////////////////////

	template<>
	static SecondaryGunList generate<Tag_BLACKBEARD>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_D_50>(),
		};
	}

	template<>
	static SecondaryGunList generate<Tag_VALKYRIE>()
	{
		return SecondaryGunList
		{
			std::make_shared<Gun_D_50>(),
		};
	}
};