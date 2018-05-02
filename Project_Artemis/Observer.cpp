#include "Observer.h"

void Observer_Enabled::_registerObservable(CS_Data* CS_arg) {
	_observable = CS_arg;
};

void Observer_Enabled::_registerObserver(CS_Data* CS_arg) {
	_observers.push_back(CS_arg);
};

void Observer_Enabled::_removeObservable(CS_Data* CS_arg) {
	_observable = NULL;
};

void Observer_Enabled::_removeObserver(CS_Data* CS_arg) {
	_observers.remove(CS_arg);
};

void Observer_Enabled::_notifyObservers() {

	std::list<CS_Data*>::iterator pos = _observers.begin();
	while (pos != _observers.end()) {
		
		pos++;
	}
};

void Observer_Enabled::stringify() {

	printf("Observer for this object has been Enabled!");
};

void Observer_Disabled::stringify() {

	printf("Observer for this object has been Disabled!");
};