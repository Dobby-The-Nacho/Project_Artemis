#include "CS_Data.h"

//------Accessors------
Proficiency_Enum CS_Data::_getProficiencyStatus() { 
	return _proficiency->_getStatus(); 
};

Advantage_Enum CS_Data::_getAdvantageStatus() { 
	return _advantage->_getStatus(); 
};

Inspiration_Enum CS_Data::_getInspirationStatus() {
	return _inspiration->_getStatus(); 
};

Dice* CS_Data::_getDice() { 
	return _die;
};

int CS_Data::_getDieNum() { 
	return _die->_getDieNum(); 
};

int CS_Data::_getDieCount() { 
	return _die->_getDieCount(); 
};

//------Mutators-------
void CS_Data::_setProficiency(Proficiency* argProficiency) { 
	_proficiency = argProficiency; 
};

void CS_Data::_setAdvantage(Advantage* argAdvantage) { 
	_advantage = argAdvantage; 
};

void CS_Data::_setInspiration(Inspiration* argInspiration) { 
	_inspiration = argInspiration; 
};

void CS_Data::_setDie(Dice* argDie) {
	_die = argDie;
};

void CS_Data::_setValue(std::string arg) {
	_value = arg;
};

std::string CS_Data::_getValue() {
	return _value;
};