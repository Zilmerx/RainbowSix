#pragma once

#include <string>
#include <vector>
#include <cassert>
#include <algorithm>

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
		auto found = std::find_if(m_Dico.begin(), m_Dico.end(), 
			[&key](const std::pair<std::string, std::string>& arg) {return arg.first == key; });

		if (found._Ptr)
		{
			return found->second;
		}
		else
		{
			assert(false, "Key could not be found");
		}
	}
};