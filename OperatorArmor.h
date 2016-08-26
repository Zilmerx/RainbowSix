#pragma once


struct LightArmorOp {};
struct MediumArmorOp {};
struct HeavyArmorOp {};

#define MAX_HP 100

enum HealthState
{
	Alive,
	DBNO,
	Dead
};

class ArmorInfo
{
public:
	const unsigned int m_ArmorLevel;

private:
	double m_DamageReduction;
	bool m_RookUpgraded;

	int HP;

public:

	ArmorInfo(LightArmorOp) noexcept :
		m_ArmorLevel{ 1 },
		m_DamageReduction{ 1 },
		m_RookUpgraded{ false },
		HP{ MAX_HP }
	{
	}

	ArmorInfo(MediumArmorOp) noexcept :
		m_ArmorLevel{ 2 },
		m_DamageReduction{ 0.9 },
		m_RookUpgraded{ false },
		HP{ MAX_HP }
	{
	}

	ArmorInfo(HeavyArmorOp) noexcept :
		m_ArmorLevel{ 3 },
		m_DamageReduction{ 0.8 },
		m_RookUpgraded{ false },
		HP{ MAX_HP }
	{
	}

	void RookUpgrade() noexcept
	{
		if (!m_RookUpgraded)
		{
			m_RookUpgraded = true;
			m_DamageReduction *= 0.80;
		}
	}


	HealthState TakeTrueDamage(Damage damage) noexcept
	{
		return TakeDamage(damage);
	}

	HealthState TakeHeadDamage(Damage damage) noexcept
	{
		return TakeArmorDamage(HeadModifier(damage));
	}
	HealthState TakeTorsoDamage(Damage damage) noexcept
	{
		return TakeArmorDamage(TorsoModifier(damage));
	}
	HealthState TakeLimbDamage(Damage damage) noexcept
	{
		return TakeArmorDamage(LimbModifier(damage));
	}
	HealthState TakeArmorDamage(Damage damage) noexcept
	{
		return TakeDamage(ArmorModifier(damage));
	}

	Damage HeadModifier(Damage damage) const noexcept
	{
		return (double)damage * 50;
	}
	Damage TorsoModifier(Damage damage) const noexcept
	{
		return damage;
	}
	Damage LimbModifier(Damage damage) const noexcept
	{
		return (double)damage * 0.75;
	}
	Damage ArmorModifier(Damage damage) const noexcept
	{
		return m_DamageReduction * (double)damage;
	}

	void Heal(unsigned int hp)
	{
		HP += hp;

		if (HP > MAX_HP)
			HP = MAX_HP;
	}

	HealthState CheckHealth() const noexcept
	{
		if (HP > 0)
		{
			return HealthState::Alive;
		}
		else if (HP > -20)
		{
			return HealthState::DBNO;
		}
		else
		{
			return HealthState::Dead;
		}
	}

private:

	HealthState TakeDamage(Damage dmg) noexcept
	{
		HP -= dmg.val;

		return CheckHealth();
	}
};