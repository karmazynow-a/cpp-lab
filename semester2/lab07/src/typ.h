#pragma once

#include <iostream>

class ObiektMiotajacy;

//klasa reprezentujaca typ ogólnie
class typ{
public:
	//konstruktor ustawuiajacy obiekt na żaden
	typ() {m_o = nullptr;}

	//funkcja wypisujaca informacje o typie i adresie
	virtual void PrzedstawSie() const;

	//funckja zwracajaca typ
	virtual int Typ() const = 0;

	//funkcja ustawiajaca obiekt miotajacy
	void setObiekt (ObiektMiotajacy * o) {m_o = o;}

	//destruktor usuwajacy obiekt miotajacy
	~typ();

private:
	//obiekt miotajacy na którego rzecz jest wywoływane rzutowania
	ObiektMiotajacy *m_o;
};


//cztery klasy reprezentujce cztery typy, dziedziczące po "typ" 
//posiadajace metode zwracajaca numer typu
class typ1 : public typ{
public:
	int Typ() const {return 1;}
};


class typ2 : public typ{
public:
	int Typ() const {return 2;}
};


class typ3 : public typ{
public:
	int Typ() const {return 3;}
};


class typ4 : public typ{
public:
	int Typ() const {return 4;}
};






