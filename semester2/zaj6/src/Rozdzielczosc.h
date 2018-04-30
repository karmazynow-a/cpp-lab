#pragma once
#include <iostream>

//klasa reprezentujaca rozdzielczosc 
class Rozdzielczosc{
public:
	//konstruktor inicjalizujący wartości rozdzielczosci x i y
	Rozdzielczosc (int x = 0, int y = 0): m_x(x), m_y(y) {}

	//zwracanie parametru x
	int x() const {return m_x;}

	//zwracanie parametru y
	int y() const {return m_y;}

private:
	//reprezentacja parametrów rozdzielczosci - długości i wysokości
	int m_x, m_y;
};

//wypisywanie parametrów rozdzielczosci na ekran w określony sposób : "XxY" dla obiektu
std::ostream & operator<<(std::ostream & stream, Rozdzielczosc r){
	stream << r.x() << "x" << r.y();
}
