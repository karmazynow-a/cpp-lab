#pragma once

#include "Ksztalt.h"

class Kwadrat : public Ksztalt{
	public:	
		//konstruktor, inicjalizuje wartość m_bok na bok
		Kwadrat (int bok): m_bok(bok) {};

		//funkcja wypisujaca parametry
		void wypisz (std::ostream & os) const;

		//funkcja zwracajaca pole powierzchni kwadratu
		float polePow () const;

	private:
		//wartosc boku kwadratu
		int m_bok;
};
