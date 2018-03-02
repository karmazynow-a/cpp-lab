#pragma once

#include "Ksztalt.h"

class Trojkat : public Ksztalt{
	public:	
		//konstruktor, inicjalizuje wartosci bokow trojkata
		Trojkat (int a, int b, int c): m_a(a), m_b(b), m_c(c) {};

		//funkcja wypisujaca parametry
		void wypisz (std::ostream & os) const;

		//funkcja zwracajaca pole powierzchni trojkata
		float polePow () const;

	private:
		//długosci kolejnych bokow trojkata
		int m_a;
		int m_b;
		int m_c;
};
