#pragma once


#include <string>
#include <memory>

#include "French.h"
#include "English.h"


class Language
{

	static std::shared_ptr<BaseLanguage> CurrentLanguage;

public:

	static std::string GetText(std::string&& key)
	{
		return CurrentLanguage->GetText(std::move(key));
	}

	template<class BaseLanguage>
	static void SetLanguage()
	{
		CurrentLanguage = std::make_shared<BaseLanguage>();
	}
};


std::shared_ptr<BaseLanguage> Language::CurrentLanguage = std::make_shared<BaseLanguage>(English{});