#pragma once
#include "Global_Enums.h"

class Damage_Type {

public:
	virtual Damage_Type_Enum _getStatus() = 0;
};

class Bludgeoning : public Damage_Type {

	Damage_Type_Enum _status = BLUDGEONING;

public:
	Damage_Type_Enum _getStatus();
};

class Piercing : public Damage_Type {

	Damage_Type_Enum _status = PIERCING;

public:
	Damage_Type_Enum _getStatus();
};

class Slashing : public Damage_Type {

	Damage_Type_Enum _status = SLASHING;

public:
	Damage_Type_Enum _getStatus();
};

class No_Damage : public Damage_Type {

	Damage_Type_Enum _status = NO_DAMAGE_TYPE;

public:
	Damage_Type_Enum _getStatus();
};
