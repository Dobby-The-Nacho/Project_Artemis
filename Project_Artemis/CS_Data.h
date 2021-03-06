#pragma once
#include "Proficiency.h"
#include "Advantage.h"
#include "Inspiration.h"
#include "Damage_Type.h"
#include "Dice.h"
#include <string>
#include <list>

class Observer;
class CS_Data {
private:
	std::string _value;
	Proficiency* _proficiency;
	Advantage* _advantage;
	Inspiration* _inspiration;
	Damage_Type* _damage_type;
	Dice* _die;
	std::list<Observer*> _observers;
	
public:
	//------Accessors------
	std::string _getValue();
	Proficiency_Enum _getProficiencyStatus();
	Advantage_Enum _getAdvantageStatus();
	Inspiration_Enum _getInspirationStatus();
	Damage_Type_Enum _getDamageType();
	Dice* _getDice();
	void _getObserver();
	int _getDieNum();
	int _getDieCount();

	//------Mutators-------
	void _setValue(std::string);
	void _setProficiency(Proficiency*);
	void _setAdvantage(Advantage*);
	void _setInspiration(Inspiration*);
	void _setDamageType(Damage_Type*);
	void _setDie(Dice*);
	void _setObserver(Observer*);
	void _removeObserver(Observer*);

	//--Simulated Events--
	void _changeValue(std::string);

};