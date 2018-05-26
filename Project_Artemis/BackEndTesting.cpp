// BackEndTesting.cpp : Defines the entry point for the console application.
//

#include "BackEndTesting.h"

int testmain()
{
	srand(time(0));
	CS_Data_Factory CS_Factory;
	CS_Data CS_Var, STR_MOD, CHA_MOD;

	CS_Var = CS_Factory._make_CS_DATA("10", D20, 1, ADVANTAGE, INSPIRATION, PROFICIENCY, NO_DAMAGE_TYPE);
	STR_MOD = CS_Factory._make_CS_DATA("0", D20, 1, ADVANTAGE, INSPIRATION, PROFICIENCY, NO_DAMAGE_TYPE);
	CHA_MOD = CS_Factory._make_CS_DATA("3", D20, 1, ADVANTAGE, INSPIRATION, PROFICIENCY, NO_DAMAGE_TYPE);
	
	Roll_Factory Roll_F;
	Roll R;

	R = Roll_F._make_Roll(CS_Var);

	Observer_Enabled* strModOb = new Observer_Modifier();
	strModOb->_registerObservable(&CS_Var);
	strModOb->_registerObserver(&STR_MOD);

	Observer_Enabled* chaModOb = new Observer_Modifier();
	chaModOb->_registerObservable(&CS_Var);
	chaModOb->_registerObserver(&CHA_MOD);

	printf("1\n");
	CS_Var._changeValue("15");
	printf("2\n");
	strModOb->_stringify();
	printf("3\n");
	chaModOb->_stringify();
	printf("4\n");
	CS_Var._getObserver();

	printf("5\n");
	CS_Var._changeValue("20");
	CS_Var._getObserver();
	//int sum = 0;
	//int timesIterated = 10000;
	//int roll = 0;
	//
	//for (int count = 0; count < timesIterated; count++) {
	//	roll = R._roll();
	//	sum += roll;
	//	printf("Sum: %d, Roll: %d\n", sum, roll);
	//}
	//int average = sum / timesIterated;
	//printf("%d", average);
	getchar();

	return 0;
}

