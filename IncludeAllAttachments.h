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
	cout << "~Sights" << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}

template<>
void CoutAttachmentList<BarrelList>(BarrelList list)
{
	cout << "~Barrel" << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}

template<>
void CoutAttachmentList<GripList>(GripList list)
{
	cout << "~Grip" << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}

template<>
void CoutAttachmentList<UnderBarrelList>(UnderBarrelList list)
{
	cout << "~UnderBarrel" << endl;

	for (auto& item : list)
		cout << "-----" << item->name() << endl;
}
