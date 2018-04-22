#pragma once
#include "Global_Enums.h"

class Advantage {
public:
	virtual Advantage_Enum _getStatus() = 0;
};

class Advantage_Enabled : public Advantage {

	Advantage_Enum _status = ADVANTAGE;

public:
	Advantage_Enum _getStatus();
};

class Advantage_Disabled : public Advantage {

	Advantage_Enum _status = NO_ADVANTAGE;

public:
	Advantage_Enum _getStatus();
};

class Disadvantage : public Advantage {

	Advantage_Enum _status = DISADVANTAGE;

public:
	Advantage_Enum _getStatus();
};