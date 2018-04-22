#include "Dice.h"

int Dice::_roll() {
	return (rand() % _die_num) + 1; 
};

int Dice::_getDieNum() { 
	return _die_num; 
};

int Dice::_getDieCount() { 
	return _die_count; 
};

void Dice::_setDieNum(Die_Enum DE) { 
	_die_num = DE; 
};

void Dice::_setDieCount(int count) { 
	_die_count = count; 
};

int No_Dice::_roll() { 
	return 0; 
};