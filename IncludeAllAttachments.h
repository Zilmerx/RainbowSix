#pragma once

#include <iostream>

#include "TypeDefs.h"

#include "Sights.h"
#include "Barrels.h"
#include "Grips.h"
#include "UnderBarrels.h"
#include "Empty.h"

using namespace std;

template<class T>
void CoutAttachmentList(T list)
{
	static_assert(false);
}

template<>
void CoutAttachmentList<SightsList>(SightsList list)
{
	cout << "~" << Language::GetText("KEY_SIGHTS") << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}

template<>
void CoutAttachmentList<BarrelList>(BarrelList list)
{
	cout << "~" << Language::GetText("KEY_BARREL") << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}

template<>
void CoutAttachmentList<GripList>(GripList list)
{
	cout << "~" << Language::GetText("KEY_GRIP") << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}

template<>
void CoutAttachmentList<UnderBarrelList>(UnderBarrelList list)
{
	cout << "~" << Language::GetText("KEY_UNDERBARREL") << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}
