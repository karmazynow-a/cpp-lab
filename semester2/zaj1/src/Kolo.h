#pragma once

#include "Ksztalt.h"

class Kolo : public Ksztalt {
	public:
		//konstruktor, inicjalizuj wartość m_promien na promien
		Kolo (int promien): m_promien (promien) {};

		//funkcja wypisujaca parametry
		void wypisz (std::ostream & os) const;

		//funkcja wracajaca pole powierzchni kola 
		float polePow () const;

	private:
		//wartosc promienia kola
		int m_promien;
		
};
