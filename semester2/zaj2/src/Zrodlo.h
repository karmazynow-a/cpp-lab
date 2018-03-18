#pragma once

#include <string>

//klasa abstrakcyjna do obsługi urzadzen
class Zrodlo {
public:
	//funkcja zwracajaca znak
	virtual char Znak () const =0;

	//funkcja zwracajaca nazwe urzadzenia
	virtual std::string Nazwa () const =0;
};
