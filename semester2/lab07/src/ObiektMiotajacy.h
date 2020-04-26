#pragma once

#include <iostream>
#include "typ.h"

//klasa reprezentujaca klase rzucajaca wyjatki
class ObiektMiotajacy {
public:
	//funkcja która wyrzuca wyjatek dotyczący rzutowania na typ1
	void Rzuc();
};

//funckja obsługująca wyjątek dotyczący rzutowania na typ4
void Przetworz (typ * t);

