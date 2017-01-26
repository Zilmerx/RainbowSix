#include <iostream>

#include "Operator.h"
#include "BaseWeapon.h"
#include "Random.h"

#include <random>
#include <chrono>
#include <memory>

#include "WeaponContainer.h"
#include "WeaponLists.h"
#include "OperatorList.h"

#include "SimulerCombat.h"

#include "Language.h"

using namespace std;

template<class OpType>
void HerpDerp(std::shared_ptr<BaseGadget>& gadget, std::vector<Operator>& opList)
{
	OpType opType;
	GadgetList gadgetList = opType.GetGadgetList();

	if (std::find_if(gadgetList.begin(), gadgetList.end(),
		[&gadget](const std::shared_ptr<BaseGadget>& arg) {return arg->GetName() == gadget->GetName(); }))
	{
		opList.push_back(Operator(OpType{}));
	}
}

void CoutOpsWithGadget(std::shared_ptr<BaseGadget> gadget)
{
	std::vector<Operator> opList;

	HerpDerp<Sledge>(gadget, opList);
	HerpDerp<Thatcher>(gadget, opList);
	HerpDerp<Smoke>(gadget, opList);
	HerpDerp<Mute>(gadget, opList);
	HerpDerp<Ash>(gadget, opList);
	HerpDerp<Thermite>(gadget, opList);
	HerpDerp<Pulse>(gadget, opList);
	HerpDerp<Castle>(gadget, opList);
	HerpDerp<Montagne>(gadget, opList);
	HerpDerp<Twitch>(gadget, opList);
	HerpDerp<Rook>(gadget, opList);
	HerpDerp<Doc>(gadget, opList);
	HerpDerp<Glaz>(gadget, opList);
	HerpDerp<Fuze>(gadget, opList);
	HerpDerp<Kapkan>(gadget, opList);
	HerpDerp<Tachanka>(gadget, opList);
	HerpDerp<Blitz>(gadget, opList);
	HerpDerp<IQ>(gadget, opList);
	HerpDerp<Bandit>(gadget, opList);
	HerpDerp<Jaeger>(gadget, opList);
	HerpDerp<Buck>(gadget, opList);
	HerpDerp<Frost>(gadget, opList);
	HerpDerp<Blackbeard>(gadget, opList);
	HerpDerp<Valkyrie>(gadget, opList);
	HerpDerp<Capitao>(gadget, opList);

	cout << "Operators with the gadget " << gadget->GetName() << " : " << endl;

	for (auto& op : opList)
	{
		cout << op.m_Name;
	}
}

void CoutSortedByDPS()
{
	auto list = WeaponLists::AllWeapons;

	WeaponLists::SortByDPS(list);

	for (auto item : list)
	{
		std::cout << item->name() << " : " << item->DPS() << std::endl;
	}
}


void SimulateCombatRandom()
{
	Operator op1 = Random::genOperator();

	Operator op2 = Random::genOperator();

	SimulerCombat simulation{ op1, op2 };
}

template<class Op1, class Op2>
void SimulateCombatOps()
{
	Operator op1 = Operator::GenerateOperator<Op1>();

	Operator op2 = Operator::GenerateOperator<Op2>();

	SimulerCombat simulation{ op1, op2 };
}

int main()
{
	Language::SetLanguage<English>();

	// CoutSortedByDPS();

	// SimulateCombatRandom();

	// SimulateCombatOps<Capitao, Bandit>();

	CoutOpsWithGadget(make_shared<BreachingCharge>());

	cout << endl;
	system("pause");
}