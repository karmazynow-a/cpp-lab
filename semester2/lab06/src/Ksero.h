#pragma once

#include "Papierozerne.h"

//klasa reprezentujaca ksero
class Ksero : virtual public Papierozerne{
public:
	//zwracanie informacji o rodzaju urzadzenia
	std::string rodzaj () const {return "Ksero";}
};
