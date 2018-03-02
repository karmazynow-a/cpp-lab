#pragma once
#include <iostream>

class Ksztalt {
	public:
	//konstruktor, nie inicjalizuje nic
	Ksztalt () {};	

	//destruktor
	virtual ~Ksztalt () {};

	//funkcja zwracajaca pole
	virtual float polePow () const = 0;
 
	//funkcja wypisujaca parametry
	virtual void wypisz (std::ostream & os) const = 0;

};

//globalna funkcja wypisujaca parametry dla wybranego ksztaltu
void wypisz (const Ksztalt & ksz);
