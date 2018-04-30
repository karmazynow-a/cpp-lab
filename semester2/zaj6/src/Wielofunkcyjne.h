#pragma once

#include "Ksero.h"
#include "Drukarka.h"
#include "Skaner.h"

//klasa reprezentujaca urzadzenie wielofunkjne będące jednocześnie Kserem, Drukarką i Skanerem
class Wielofunkcyjne : public Ksero, public Drukarka, public Skaner{
public:
	//kostruktor inicjalizujacy rozdzieloczosci Drukarki i Skanera
	Wielofunkcyjne (Rozdzielczosc r_d, Rozdzielczosc r_s): Papierozerne(), Drukarka(r_d), Skaner(r_s){}

	//zwracanie informacji o rodzaju urzadzenia
	std::string rodzaj () const {return "Wielofunkcyjne";}
};
