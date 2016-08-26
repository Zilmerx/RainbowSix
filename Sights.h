#pragma once

#include "BaseAttachment.h"

class Att_Red_Dot : public BaseSights
{
public:
	virtual std::string name() const override
	{
		return "Red Dot";
	}
};

class Att_Reflex : public BaseSights
{
public:
	virtual std::string name() const override
	{
		return "Reflex";
	}
};

class Att_Holographic : public BaseSights
{
public:
	virtual std::string name() const override
	{
		return "Holographic";
	}
};

class Att_ACOG : public BaseSights
{
public:
	virtual std::string name() const override
	{
		return "ACOG";
	}
};