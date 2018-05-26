#pragma once
#include "CS_Data.h"
#include "DND_Math.h"
#include <list>
#include "cstddef"
#define NULL nullptr;

class Observer {
public:
	virtual void _stringify() = 0;
	virtual void _notifyObservers() = 0;
};

class Observer_Enabled : public Observer {
protected:
	CS_Data* _observable;
	std::list<CS_Data*> _observers;

public:
	void _registerObservable(CS_Data*);
	void _registerObserver(CS_Data*);
	void _removeObservable();
	void _removeObserver(CS_Data*);
	void _stringify();
	void _notifyObservers();
};

class Observer_Modifier : public Observer_Enabled {

	void _stringify();
	void _notifyObservers();
};

class Observer_Disabled : public Observer {
public:
	void _stringify();
	void _notifyObservers();
};