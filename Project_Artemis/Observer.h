#pragma once
#include "CS_Data.h"
#include <list>
#include "cstddef"
#define NULL nullptr;

class Observer {
public:
	virtual void stringify() = 0;
};

class Observer_Enabled : public Observer {

	CS_Data* _observable;
	std::list<CS_Data*> _observers;

public:
	void _registerObservable(CS_Data*);
	void _registerObserver(CS_Data*);
	void _removeObservable(CS_Data*);
	void _removeObserver(CS_Data*);
	void stringify();

protected:
	void _notifyObservers();
};

class Observer_Disabled : public Observer {
public:
	void stringify();
};