#include "DND_Math.h"
#include "math.h"

std::string Change_Modifier(std::string observableBase, std::string observerBase) {

	return std::to_string( 
		std::stoi(observerBase, nullptr, 10) + Calculate_Modifier(observableBase)
	);
};

int Calculate_Modifier(std::string observableBase) {

	int conObservableBase = stoi(observableBase, nullptr, 10);
	int calulatedModifier = floor((conObservableBase - 10) / 2.0);

	return calulatedModifier;
};