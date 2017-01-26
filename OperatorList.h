#pragma once

#include <vector>
#include <memory>

#include "Operator.h"
#include "IncludeOperatorDefs.h"

struct OperatorList
{
	static const std::vector<shared_ptr<Operator>> Operators;
};

const std::vector<shared_ptr<Operator>> OperatorList::Operators =
{
		std::make_shared<Operator>(Sledge{}),
		std::make_shared<Operator>(Thatcher{}),
		std::make_shared<Operator>(Smoke{}),
		std::make_shared<Operator>(Mute{}),
		std::make_shared<Operator>(Ash{}),
		std::make_shared<Operator>(Thermite{}),
		std::make_shared<Operator>(Pulse{}),
		std::make_shared<Operator>(Castle{}),
		std::make_shared<Operator>(Montagne{}),
		std::make_shared<Operator>(Twitch{}),
		std::make_shared<Operator>(Rook{}),
		std::make_shared<Operator>(Doc{}),
		std::make_shared<Operator>(Glaz{}),
		std::make_shared<Operator>(Fuze{}),
		std::make_shared<Operator>(Kapkan{}),
		std::make_shared<Operator>(Tachanka{}),
		std::make_shared<Operator>(Blitz{}),
		std::make_shared<Operator>(IQ{}),
		std::make_shared<Operator>(Bandit{}),
		std::make_shared<Operator>(Jaeger{}),
		std::make_shared<Operator>(Buck{}),
		std::make_shared<Operator>(Frost{}),
		std::make_shared<Operator>(Blackbeard{}),
		std::make_shared<Operator>(Valkyrie{}),
		std::make_shared<Operator>(Capitao{}),
};