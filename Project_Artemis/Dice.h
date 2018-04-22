#pragma once
#include <cstdlib>
#include "Global_Enums.h"

class Dice {
private:
	int _die_num;
	int _die_count;
public:
	int _roll();
	int _getDieNum();
	int _getDieCount();
	void _setDieNum(Die_Enum);
	void _setDieCount(int);
};

class No_Dice : public Dice {

	int _roll();
};

//class D20 : public Die {
//
//public:
//	D20() { _setDieNum(20); };
//
//	int _roll() { return rand() % 20; }
//};
//
//class D12 : public Die {
//
//public:
//	D12() { _setDieNum(12); };
//
//	int _roll() { return rand() % 12; }
//};
//
//class D10 : public Die {
//
//public:
//	D10() { _setDieNum(10); };
//
//	int _roll() { return rand() % 10; }
//};
//
//class D8 : public Die {
//
//public:
//	D8() { _setDieNum(8); };
//
//	int _roll() { return rand() % 8; }
//};
//
//class D6 : public Die {
//
//public:
//	D6() { _setDieNum(6); };
//
//	int _roll() { return rand() % 6; }
//};
//
//class D4 : public Die {
//
//public:
//	D4() { _setDieNum(4); };
//
//	int _roll() { return rand() % 4; }
//};