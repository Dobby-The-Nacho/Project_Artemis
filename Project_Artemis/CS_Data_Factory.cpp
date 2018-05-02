#include "CS_Data_Factory.h"

CS_Data CS_Data_Factory::_make_CS_DATA(std::string valueArg,
	Die_Enum DE,
	int diceCount,
	Advantage_Enum AE,
	Inspiration_Enum IE,
	Proficiency_Enum PE,
	Damage_Type_Enum DTE) {

	_creation._setValue(valueArg);

	if (DE) {
		_die_component = new Dice();
		_die_component->_setDieNum(DE);
		_die_component->_setDieCount(diceCount);
	}
	else {
		_die_component = new No_Dice();
	}

	if (AE) {
		_advantage_component = new Advantage_Enabled();
	}
	else {
		_advantage_component = new Advantage_Disabled();
	}

	if (IE) {
		_inspiration_component = new Inspiration_Enabled();
	}
	else {
		_inspiration_component = new Inspiration_Disabled();
	}

	if (PE) {
		_proficiency_component = new Proficiency_Enabled();
	}
	else {
		_proficiency_component = new Proficiency_Disabled();
	}

	switch (DTE) {
	case 0:
		_damage_component = new No_Damage();
		break;
	case 1:
		_damage_component = new Bludgeoning();
		break;
	case 2:
		_damage_component = new Piercing();
		break;
	case 3:
		_damage_component = new Slashing();
		break;
	}

	_obs_component = new Observer_Disabled();

	_creation._setDie(_die_component);
	_creation._setAdvantage(_advantage_component);
	_creation._setInspiration(_inspiration_component);
	_creation._setProficiency(_proficiency_component);
	_creation._setDamageType(_damage_component);
	_creation._setObserver(_obs_component);

	return _creation;
};

//CS_Data CS_Data_Factory::_make_Rollable(Die_Enum DE, int DC, Advantage_Enum AE, Inspiration_Enum IE, Proficiency_Enum PE) {
//	return _make_CS_DATA("", DE, DC, AE, IE, PE, NO_DAMAGE_TYPE, OSE, OB);
//};
//
//CS_Data CS_Data_Factory::_make_UnRollable(std::string str) {
//	return _make_CS_DATA(str, NO_DICE, 0, NO_ADVANTAGE, NO_INSPIRATION, NO_PROFICIENCY, NO_DAMAGE_TYPE);
//};
//
//CS_Data CS_Data_Factory::_make_Weapon(std::string str, Die_Enum DE, int DC, Damage_Type_Enum DTE) {
//	return _make_CS_DATA(str, DE ,DC, ADVANTAGE, INSPIRATION, PROFICIENCY, DTE);
//};
