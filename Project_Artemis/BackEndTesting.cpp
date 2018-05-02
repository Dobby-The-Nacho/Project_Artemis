// BackEndTesting.cpp : Defines the entry point for the console application.
//

#include "BackEndTesting.h"

int testmain()
{
	srand(time(0));
	CS_Data_Factory CS_Factory;
	CS_Data CS_Var;

	CS_Var = CS_Factory._make_CS_DATA("HardGay", D20, 1, ADVANTAGE, INSPIRATION, PROFICIENCY, NO_DAMAGE_TYPE);

	Roll_Factory Roll_F;
	Roll R;

	R = Roll_F._make_Roll(CS_Var);

	int sum = 0;
	int timesIterated = 10000;
	int roll = 0;

	for (int count = 0; count < timesIterated; count++) {
		roll = R._roll();
		sum += roll;
		printf("Sum: %d, Roll: %d\n", sum, roll);
	}
	int average = sum / timesIterated;
	printf("%d", average);
	getchar();

	return 0;
}

