#pragma once

#include <string>
#include <vector>
#include <cassert>

class BaseLanguage
{

	std::vector<std::pair<std::string, std::string>> m_Dico;

public:

	BaseLanguage(std::vector<std::pair<std::string, std::string>>&& DicoList) :
		m_Dico{ DicoList }
	{
	}


	std::string GetText(std::string&& key)
	{
		std::string* found = nullptr;

		for (auto& val : m_Dico)
		{
			if (val.first == key)
			{
				found = &val.second;
				break;
			}
		}

		if (found)
		{
			return *found;
		}
		else
		{
			assert(false, "Key could not be found");
		}
	}
};