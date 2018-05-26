#include "CS_Data.h"
#include "Observer.h"

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

Damage_Type_Enum CS_Data::_getDamageType() {
	return _damage_type->_getStatus();
}

Dice* CS_Data::_getDice() { 
	return _die;
};

int CS_Data::_getDieNum() { 
	return _die->_getDieNum(); 
};

int CS_Data::_getDieCount() { 
	return _die->_getDieCount(); 
};

std::string CS_Data::_getValue() {
	return _value;
};

void CS_Data::_getObserver() {

	std::list<Observer*>::iterator pos = _observers.begin();
	while (pos != _observers.end()) {

		(*pos)->_stringify();

		pos++;
	}
}

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

void CS_Data::_setDamageType(Damage_Type* argDamageType) {
	_damage_type = argDamageType;
};

void CS_Data::_setDie(Dice* argDie) {
	_die = argDie;
};

void CS_Data::_setValue(std::string arg) {
	_value = arg;
};

void CS_Data::_setObserver(Observer* argObs) {
	_observers.push_back(argObs);
};

void CS_Data::_removeObserver(Observer* argObs) {
	_observers.remove(argObs);
};

void CS_Data::_changeValue(std::string arg) {

	std::list<Observer*>::iterator pos = _observers.begin();
	while (pos != _observers.end()) {

		(*pos)->_notifyObservers();

		pos++;
	}

	_setValue(arg);
};
