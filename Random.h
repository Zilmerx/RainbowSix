#pragma once

#include <vector>
#include "Operator.h"

#include <random>
#include <chrono>
#include <cassert>
#include <memory>

#include "IncludeOperatorDefs.h"

class Random
{
public:
	static Operator genOperator() noexcept
	{
		switch (RandInt(0, 25))
		{
		    case 0: return Operator::GenerateOperator<Sledge>();
			case 1: return Operator::GenerateOperator<Thatcher>();
			case 2: return Operator::GenerateOperator<Smoke>();
			case 3: return Operator::GenerateOperator<Mute>();
			case 4: return Operator::GenerateOperator<Ash>();
			case 5: return Operator::GenerateOperator<Thermite>();
			case 6: return Operator::GenerateOperator<Pulse>();
			case 7: return Operator::GenerateOperator<Castle>();
			case 8: return Operator::GenerateOperator<Montagne>();
			case 9: return Operator::GenerateOperator<Twitch>();
			case 10: return Operator::GenerateOperator<Rook>();
			case 11: return Operator::GenerateOperator<Doc>();
			case 12: return Operator::GenerateOperator<Glaz>();
			case 13: return Operator::GenerateOperator<Fuze>();
			case 14: return Operator::GenerateOperator<Kapkan>();
			case 15: return Operator::GenerateOperator<Tachanka>();
			case 16: return Operator::GenerateOperator<Blitz>();
			case 17: return Operator::GenerateOperator<IQ>();
			case 18: return Operator::GenerateOperator<Bandit>();
			case 19: return Operator::GenerateOperator<Jaeger>();
			case 20: return Operator::GenerateOperator<Buck>();
			case 21: return Operator::GenerateOperator<Frost>();
			case 22: return Operator::GenerateOperator<Blackbeard>();
			case 23: return Operator::GenerateOperator<Valkyrie>();
			case 24: return Operator::GenerateOperator<Capitao>();
			default: assert(!"An operator tag is missing in this list.");
		}
	}

	/*
	static void genGuns(Operator& op)
	{
		op.SetPrimaryWeapon(RandInt(1, op.m_PrimaryWeaponChoices.size()) - 1);

		op.SetSecondaryWeapon(RandInt(1, op.m_SecondaryWeaponChoices.size()) - 1);
	}*/

	static void genAttachments(shared_ptr<BaseGun>& gun) noexcept
	{
		RandomSights(gun);
		RandomBarrel(gun);
		RandomGrip(gun);
		RandomUnderBarrel(gun);
	}

	static void RandomSights(shared_ptr<BaseGun>& gun) noexcept
	{
		auto sightsList = gun->getSightsList();
		gun->SetSights(RandInt(0, sightsList.size()));
	}

	static void RandomBarrel(shared_ptr<BaseGun>& gun) noexcept
	{
		auto barrelList = gun->getBarrelList();
		gun->SetBarrel(RandInt(0, barrelList.size()));
	}

	static void RandomGrip(shared_ptr<BaseGun>& gun) noexcept
	{
		auto gripList = gun->getGripList();
		gun->SetGrip(RandInt(0, gripList.size()));
	}

	static void RandomUnderBarrel(shared_ptr<BaseGun>& gun) noexcept
	{
		auto underBarrelList = gun->getUnderBarrelList();
		gun->SetUnderBarrel(RandInt(0, underBarrelList.size()));
	}
	
	static int RandInt(int&& min, int&& max) noexcept
	{
		std::mt19937 rng(std::chrono::high_resolution_clock::now().time_since_epoch().count());

		std::uniform_int_distribution<int> dist{ min, max };

		return dist(rng);
	}
};