#pragma once
#include <vector>
#include "CS_Data.h"


class Roll {

private:
	std::vector<Dice*> _die;
	int _result;
	Advantage_Enum AE;
	Inspiration_Enum IE;
	Proficiency_Enum PE;

public:
	void _addDie(Dice*);
	void _removeDie(Dice*);

	void _setAdvantageEnum(Advantage_Enum);
	void _setInspirationEnum(Inspiration_Enum);
	void _setProficiencyEnum(Proficiency_Enum);

	int _roll();
};