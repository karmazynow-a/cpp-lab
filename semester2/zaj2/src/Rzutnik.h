#pragma once

#include "Zrodlo.h"

class Rzutnik {
public:
	//konstruktor inicjalizujacy wymiary Rzutnika - szerokowsc i wysokosc
	Rzutnik(const int szer = 0, const int wys = 0): m_szer(szer), m_wys(wys) {};
	
	//funckja wyswietlajaca ramke rzutnika i zawartosc podlaczonego zrodla
	void Wyswietl (const Zrodlo *zrodlo) const;

private:
	//wymiary rzutnika
	int m_szer;
	int m_wys;
};
