#pragma once

#include "BaseLanguage.h"



class French : public BaseLanguage
{
public:

	French() :
		BaseLanguage(
	{ 
		std::make_pair<std::string, std::string>("KEY_CHOOSE_PRIMARY", "Choisissez une arme primaire :"),
		std::make_pair<std::string, std::string>("KEY_CHOOSE_SECONDARY", "Choisissez une arme secondaire :"),
		std::make_pair<std::string, std::string>("KEY_SPEED", "VITESSE"),
		std::make_pair<std::string, std::string>("KEY_ARMOR", "ARMURE"),
		std::make_pair<std::string, std::string>("KEY_PRIMARY_WEAP", "ARME PRIMAIRE"),
		std::make_pair<std::string, std::string>("KEY_SECONDARY_WEAP", "ARME SECONDAIRE"),
		std::make_pair<std::string, std::string>("KEY_IS_USING", " utilise un "),
		std::make_pair<std::string, std::string>("KEY_TAKES", " prends "),
		std::make_pair<std::string, std::string>("KEY_DAMAGE", " degats "),
		std::make_pair<std::string, std::string>("KEY_HAS_LOST", " a perdu "),
		std::make_pair<std::string, std::string>("KEY_DNBO", " DNBO "),
		std::make_pair<std::string, std::string>("KEY_DEAD", " Mort "),
	
		std::make_pair<std::string, std::string>("KEY_DAMAGE:",   "Degats     :"),
		std::make_pair<std::string, std::string>("KEY_FIRERATE:", "Cadence tir:"),
		std::make_pair<std::string, std::string>("KEY_MOBILITY:", "Mobilite   :"),
		std::make_pair<std::string, std::string>("KEY_RECOIL:",   "Recul      :"),
		std::make_pair<std::string, std::string>("KEY_SPREAD:",   "Dispersion :"),
		std::make_pair<std::string, std::string>("KEY_AMMOCAP:",  "Capacite   :"),
		std::make_pair<std::string, std::string>("KEY_HIPFIRE:",  "Hipfire    :"),

		std::make_pair<std::string, std::string>("KEY_SIGHTS",		"Visee     "),
		std::make_pair<std::string, std::string>("KEY_BARREL",		"Baril     "),
		std::make_pair<std::string, std::string>("KEY_GRIP",		"Poignee   "),
		std::make_pair<std::string, std::string>("KEY_UNDERBARREL", "Sous baril"),
	})
	{
	}
};