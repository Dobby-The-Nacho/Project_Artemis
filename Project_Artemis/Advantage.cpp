#include "Advantage.h"

Advantage_Enum Advantage_Enabled::_getStatus() { 
	return _status; 
};

Advantage_Enum Advantage_Disabled::_getStatus() {
	return _status; 
};

Advantage_Enum Disadvantage::_getStatus() { 
	return _status; 
};