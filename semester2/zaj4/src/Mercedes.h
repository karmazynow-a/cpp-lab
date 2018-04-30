#pragma once

#include "Samochod.h"

class Mercedes : public Samochod{
public:
	//konstruktor domyślny
	Mercedes () = default;

	//konstruktor ustawiający dane silnika, stały kolor, oraz stan licznika
	Mercedes (Silnik & silnik, float stan = 0.0): Samochod (silnik, "czarny metalic", stan) {}
};
