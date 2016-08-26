#pragma once

struct HighSpeedOp {};
struct MediumSpeedOp {};
struct LowSpeedOp {};


class SpeedInfo
{
public:
	const unsigned int m_SpeedLevel;

public:

	SpeedInfo(HighSpeedOp) noexcept :
		m_SpeedLevel{ 3 }
	{
	}

	SpeedInfo(MediumSpeedOp) noexcept :
		m_SpeedLevel{ 2 }
	{
	}

	SpeedInfo(LowSpeedOp) noexcept :
		m_SpeedLevel{ 1 }
	{
	}
};