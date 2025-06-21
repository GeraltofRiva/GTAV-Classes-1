#pragma once
#include "security/ObfVar.hpp"
#include <array>

#pragma pack(push, 8)
class GameDataHash
{
public:
	bool m_is_japanese_version;
	std::array<rage::Obf32, 16> m_data;
	char new_0104[0x18]; // Obf64, added b3570
};
static_assert(sizeof(GameDataHash) == 0x11C);
#pragma pack(pop)
