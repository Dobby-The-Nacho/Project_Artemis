#pragma once
#include "Global_Enums.h"

class Inspiration {

public:
	virtual Inspiration_Enum _getStatus() = 0;
};

class Inspiration_Enabled : public Inspiration {

	Inspiration_Enum _status = INSPIRATION;

public:
	Inspiration_Enum _getStatus();
};

class Inspiration_Disabled : public Inspiration {

	Inspiration_Enum _status = NO_INSPIRATION;

public:
	Inspiration_Enum _getStatus();
};