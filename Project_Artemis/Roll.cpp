#include "Roll.h"

void Roll::_addDie(Dice* argDie) { 
	_die.push_back(argDie); 
};

void Roll::_removeDie(Dice* argDie) {
	_die.pop_back(); 
};

void Roll::_setAdvantageEnum(Advantage_Enum argAE) {
	AE = argAE;
};

void Roll::_setInspirationEnum(Inspiration_Enum argIE) {
	IE = argIE;
};

void Roll::_setProficiencyEnum(Proficiency_Enum argPE) {
	PE = argPE;
};

int Roll::_roll() {

	_result = 0;
	for (int count = 0; count < _die[0]->_getDieCount(); count++)
	{
		_result += _die[count]->_roll();
	}

	return _result;
}