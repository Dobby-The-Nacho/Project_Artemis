#include "Inspiration.h"

Inspiration_Enum Inspiration_Enabled::_getStatus() { 
	return _status;
};

Inspiration_Enum Inspiration_Disabled::_getStatus() {
	return _status; 
};