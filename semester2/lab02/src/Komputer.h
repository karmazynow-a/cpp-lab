#pragma once

#include <string>
#include "Zrodlo.h"

class Komputer : public Zrodlo {
public:
	//konstruktor inicjalizujacy znak, mający być wyswietlany
	Komputer (const char znak): m_znak(znak) {};

	//funkcja zwracajaca znak
	char Znak () const {return m_znak;}

	//funkcja zawacajaca nazwe urzadzenia
	std::string Nazwa () const {return "komputer";}

private:
	//zank, który ma byc wyswietlany
	char m_znak;
};
