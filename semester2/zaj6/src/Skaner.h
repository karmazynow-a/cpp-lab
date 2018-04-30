#pragma once

#include "Urzadzenie.h"
#include "Rozdzielczosc.h"

//klasa reprezentujaca skaner
class Skaner : virtual public Urzadzenie{
public:
	//konstruktor inicjalizujacy rozdzielczosc skanera
	Skaner (Rozdzielczosc r) : m_r(r) {}

	//zwracanie rodzaju urzadzenia w postaci napisu
	std::string rodzaj () const {return "Skaner";}

	//zwracanie rozdzielczosci skanera
	Rozdzielczosc  rozdzielczosc () const {return m_r;}

private:
	//parametr przechowujacy informacje o rozdzielczosci skanera
	Rozdzielczosc m_r;
};
