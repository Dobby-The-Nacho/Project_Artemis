#include "Observer.h"

void Observer_Enabled::_registerObservable(CS_Data* CS_arg) {
	_observable = CS_arg;
	_observable->_setObserver(this);
};

void Observer_Enabled::_registerObserver(CS_Data* CS_arg) {
	_observers.push_back(CS_arg);
	_observers.back()->_setObserver(this);
};

void Observer_Enabled::_removeObservable(CS_Data* CS_arg) {
	_observable = NULL;
};

void Observer_Enabled::_removeObserver(CS_Data* CS_arg) {
	_observers.remove(CS_arg);
};

void Observer_Enabled::_notifyObservers() {

	printf("The observer structure is enabled, but has not been instantiated with a purpose!\n");
};

void Observer_Enabled::_stringify() {

	printf("Observer for this object has been Enabled!\n");
};

void Observer_Disabled::_stringify() {

	printf("Observer for this object has been Disabled!\n");
};

void Observer_Disabled::_notifyObservers() {

	printf("No observers are recorded! This has been disabled!\n");
};

void Observer_Modifier::_stringify() {

	printf("The Observable Value is: %s\n", _observable->_getValue().c_str());

	std::list<CS_Data*>::iterator pos = _observers.begin();
	while (pos != _observers.end()) {

		printf("The Observer(s) Values are: %s\n", (*pos)->_getValue().c_str());

		pos++;
	}
};

void Observer_Modifier::_notifyObservers() {

	std::list<CS_Data*>::iterator pos = _observers.begin();
	while (pos != _observers.end()) {

		(*pos)->_setValue(Change_Modifier(_observable->_getValue(), (*pos)->_getValue()));

		pos++;
	}
}
