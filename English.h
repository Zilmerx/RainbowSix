#pragma once

#include "BaseLanguage.h"



class English : public BaseLanguage
{
public:

	English() :
		BaseLanguage(
	{
		std::make_pair<std::string, std::string>("KEY_CHOOSE_PRIMARY", "Choose a primary weapon :"),
		std::make_pair<std::string, std::string>("KEY_CHOOSE_SECONDARY", "Choose a secondary weapon :"),
		std::make_pair<std::string, std::string>("KEY_SPEED", "SPEED"),
		std::make_pair<std::string, std::string>("KEY_ARMOR", "ARMOR"),
		std::make_pair<std::string, std::string>("KEY_PRIMARY_WEAP", "PRIMARY WEAPON"),
		std::make_pair<std::string, std::string>("KEY_SECONDARY_WEAP", "SECONDARY WEAPON"),
		std::make_pair<std::string, std::string>("KEY_IS_USING", " is using a "),
		std::make_pair<std::string, std::string>("KEY_TAKES", " takes "),
		std::make_pair<std::string, std::string>("KEY_DAMAGE", " damage "),
		std::make_pair<std::string, std::string>("KEY_HAS_LOST", " has lost "),
		std::make_pair<std::string, std::string>("KEY_DNBO", " DNBO "),
		std::make_pair<std::string, std::string>("KEY_DEAD", " Dead "),

		std::make_pair<std::string, std::string>("KEY_DAMAGE:",   "Damage     :"),
		std::make_pair<std::string, std::string>("KEY_FIRERATE:", "Fire rate  :"),
		std::make_pair<std::string, std::string>("KEY_MOBILITY:", "Mobility   :"),
		std::make_pair<std::string, std::string>("KEY_RECOIL:",   "Recoil     :"),
		std::make_pair<std::string, std::string>("KEY_SPREAD:",   "Spread     :"),
		std::make_pair<std::string, std::string>("KEY_AMMOCAP:",  "Ammo cap   :"),
		std::make_pair<std::string, std::string>("KEY_HIPFIRE:",  "Hipfire    :"),

		std::make_pair<std::string, std::string>("KEY_SIGHTS",		"Sights    "),
		std::make_pair<std::string, std::string>("KEY_BARREL",		"Barrel    "),
		std::make_pair<std::string, std::string>("KEY_GRIP",		"Grip      "),
		std::make_pair<std::string, std::string>("KEY_UNDERBARREL", "UnderB    "),
	})
	{
	}
};