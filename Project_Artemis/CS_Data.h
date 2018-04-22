#pragma once
#include "Proficiency.h"
#include "Advantage.h"
#include "Inspiration.h"
#include "Dice.h"
#include <string>

class CS_Data {
private:
	std::string _value;
	Proficiency* _proficiency;
	Advantage* _advantage;
	Inspiration* _inspiration;
	Dice* _die;
	
public:
	//------Accessors------
	std::string _getValue();
	Proficiency_Enum _getProficiencyStatus();
	Advantage_Enum _getAdvantageStatus();
	Inspiration_Enum _getInspirationStatus();
	Dice* _getDice();
	int _getDieNum();
	int _getDieCount();

	//------Mutators-------
	void _setValue(std::string);
	void _setProficiency(Proficiency*);
	void _setAdvantage(Advantage*);
	void _setInspiration(Inspiration*);
	void _setDie(Dice*);

};