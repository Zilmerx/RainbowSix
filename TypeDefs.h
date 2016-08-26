#pragma once

#include <vector>
#include <memory>

class PrimaryWeapon;
class SecondaryWeapon;

typedef std::vector<std::shared_ptr<PrimaryWeapon>>		PrimaryGunList;
typedef std::vector<std::shared_ptr<SecondaryWeapon>>	SecondaryGunList;


class BaseSights;
class BaseBarrel;
class BaseGrip;
class BaseUnderBarrel;

typedef std::vector<std::shared_ptr<BaseSights>>		SightsList;
typedef std::vector<std::shared_ptr<BaseBarrel>>		BarrelList;
typedef std::vector<std::shared_ptr<BaseGrip>>			GripList;
typedef std::vector<std::shared_ptr<BaseUnderBarrel>>	UnderBarrelList;
