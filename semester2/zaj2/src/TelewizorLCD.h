#pragma once

#include "Zrodlo.h"

class TelewizorLCD  {
public:
	//konstruktor, inicjalizujacy wymiary TelewizoraLCD - m_szer i m_wys
	TelewizorLCD(const int szer = 0, const int wys = 0): m_szer(szer), m_wys(wys) {};

	//funkcja do wyswitlania ramki i zawartosci zrodla
	void Wyswietl (const Zrodlo *zrodlo) const;

private:
	//wymiary telewizora
	int m_szer;
	int m_wys;
};
