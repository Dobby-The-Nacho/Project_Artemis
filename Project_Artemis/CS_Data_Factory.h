#pragma once
#include <string>
#include "CS_Data.h"
#include "Observer.h"

class CS_Data_Factory {

	CS_Data _creation;
	Advantage* _advantage_component;
	Inspiration* _inspiration_component;
	Proficiency* _proficiency_component;
	Damage_Type* _damage_component;
	Dice* _die_component;

	//While this factory should not handle OBS functionality
	//it is appropriate to initialize this to DISABLED
	Observer* _obs_component;

public:
	CS_Data _make_CS_DATA(
		std::string,
		Die_Enum,
		int,
		Advantage_Enum,
		Inspiration_Enum,
		Proficiency_Enum,
		Damage_Type_Enum);

//	CS_Data _make_Rollable(
//		Die_Enum,
//		int,
//		Advantage_Enum,
//		Inspiration_Enum,
//		Proficiency_Enum);
//
//	CS_Data _make_UnRollable(std::string);
//
//	CS_Data _make_Weapon(
//		std::string,
//		Die_Enum,
//		int,
//		Damage_Type_Enum);

};