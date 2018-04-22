#pragma once
#include "Global_Enums.h"

class Proficiency {
public:
	virtual Proficiency_Enum _getStatus() = 0;
};

class Proficiency_Enabled : public Proficiency {

	Proficiency_Enum _status = PROFICIENCY;

public:
	Proficiency_Enum _getStatus();
};

class Proficiency_Disabled : public Proficiency {

	Proficiency_Enum _status = NO_PROFICIENCY;

public:
	Proficiency_Enum _getStatus();
};