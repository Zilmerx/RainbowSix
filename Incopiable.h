#pragma once

class Incopiable
{
public:
	Incopiable(const Incopiable&) = delete;
	Incopiable& operator=(const Incopiable&) = delete;
protected:
	constexpr Incopiable() = default;
	~Incopiable() = default;
};