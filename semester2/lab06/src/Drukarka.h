#pragma once

#include "Papierozerne.h"
#include "Rozdzielczosc.h"

//klasa reprezentujaca drukarke
class Drukarka : virtual public Papierozerne{
public:
	//konstruktor inicjalizujacy rozdzielczosc drukarki
	Drukarka (Rozdzielczosc r) : m_r(r) {}

	//zwracanie rodzaju urzadzenia w postaci napisu
	std::string rodzaj () const {return "Drukarka";}

	//zwracanie rozdzielczosci drukarki
	Rozdzielczosc rozdzielczosc () const {return m_r;}

private:
	//parametr przechowujacy informacje o rozdzielczosci drukarki
	Rozdzielczosc m_r;	
};
