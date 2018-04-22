#include "Roll_Factory.h"

Roll Roll_Factory::_make_Roll(CS_Data CSarg) {

	_creation._setInspirationEnum(CSarg._getInspirationStatus());
	_creation._setAdvantageEnum(CSarg._getAdvantageStatus());
	_creation._setProficiencyEnum(CSarg._getProficiencyStatus());

	for (int count = 0; count < CSarg._getDieCount(); count++) {
		_creation._addDie(CSarg._getDice());
	}

	return _creation;
}