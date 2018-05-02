#pragma once

enum Rollability_Enum
{
	ROLLABLE = 0,
	UNROLLABLE = 1,
};

enum Advantage_Enum
{
	NO_ADVANTAGE = 0,
	ADVANTAGE = 1,
	DISADVANTAGE = 2,
};

enum Inspiration_Enum
{
	NO_INSPIRATION = 0,
	INSPIRATION = 1,
};

enum Proficiency_Enum
{
	NO_PROFICIENCY = 0,
	PROFICIENCY = 1,
};

enum Type_Enum
{
	INTEGER = 0,
	STRING = 1,
};

enum Die_Enum
{
	NO_DICE = 0,
	D100 = 100,
	D20 = 20,
	D12 = 12,
	D10 = 10,
	D8 = 8,
	D6 = 6,
	D4 = 4,
};

enum Damage_Type_Enum
{
	NO_DAMAGE_TYPE = 0,
	BLUDGEONING = 1,
	PIERCING = 2,
	SLASHING = 3,
};

enum Weapon_Enum
{
	NO_WEAPON = 0,
	WEAPON = 1,
};

enum Observer_Status_Enum
{
	NO_OBSERVING = 0,
	OBSERVER = 1,
	OBSERVABLE = 2,
};