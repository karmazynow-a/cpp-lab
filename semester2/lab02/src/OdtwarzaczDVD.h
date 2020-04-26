#pragma once

#include <string>
#include "Zrodlo.h"

class OdtwarzaczDVD : public Zrodlo {
public:
	//konstruktor inicjalizujacy znak, który ma być wyświetlany
	OdtwarzaczDVD (const char znak): m_znak(znak) {};

	//funkcja zwracajaca znak 
	char Znak () const {return m_znak;}

	//funkcja zwracajaca nazwe urzadzenia
	std::string Nazwa () const {return "DVD";}

private:
	//znak, który ma byc wyswietlany
	char m_znak;
};
