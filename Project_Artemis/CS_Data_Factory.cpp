#include "CS_Data_Factory.h"

CS_Data CS_Data_Factory::_make_CS_DATA(std::string valueArg,
	Die_Enum DE,
	int diceCount,
	Advantage_Enum AE,
	Inspiration_Enum IE,
	Proficiency_Enum PE) {

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

	_creation._setDie(_die_component);
	_creation._setAdvantage(_advantage_component);
	_creation._setInspiration(_inspiration_component);
	_creation._setProficiency(_proficiency_component);

	return _creation;
};

CS_Data CS_Data_Factory::_make_Rollable() {
	_advantage_component = new Advantage_Enabled();
	_inspiration_component = new Inspiration_Enabled();
	_proficiency_component = new Proficiency_Enabled();
	_die_component->_setDieNum(D20);

	_creation._setValue("");
	_creation._setAdvantage(_advantage_component);
	_creation._setInspiration(_inspiration_component);
	_creation._setProficiency(_proficiency_component);
	_creation._setDie(_die_component);

	return _creation;
};

CS_Data CS_Data_Factory::_make_UnRollable() {
	_advantage_component = new Advantage_Disabled();
	_inspiration_component = new Inspiration_Disabled();
	_proficiency_component = new Proficiency_Disabled();
	_die_component = new No_Dice();

	_creation._setValue("");
	_creation._setAdvantage(_advantage_component);
	_creation._setInspiration(_inspiration_component);
	_creation._setProficiency(_proficiency_component);
	_creation._setDie(_die_component);

	return _creation;
};