#pragma once
#include <string>
#include "CS_Data.h"

class CS_Data_Factory {

	CS_Data _creation;
	Advantage* _advantage_component;
	Inspiration* _inspiration_component;
	Proficiency* _proficiency_component;
	Dice* _die_component;

public:
	CS_Data _make_CS_DATA(
		std::string,
		Die_Enum,
		int,
		Advantage_Enum,
		Inspiration_Enum,
		Proficiency_Enum);

	CS_Data _make_Rollable();
	CS_Data _make_UnRollable();

};