#pragma once

#include <iostream>
#include <string>

class Page{
public:
	//konstruktor inicjalizujacy nagłówek i bufor (tekst)na podane/domyslne wartosci
	Page (std::string header = "empty", std::string text = "empty" ): m_header (header), m_text (text) {};

	//funkcja ustawiajaca tresc nagłówka na podaną
	void AddHeader (std::string header) {m_header = header;}

	//funkcja ustawiajaca bufor (tekst) na podany
	void AddText (std::string text) {m_text = text;}

	//funkcja wypisujaca dane obiektu
	void Print ();

	//funkcja zwracajaca kopie danego obiektu (nowy obiekt)
	Page *Copy ();

	//funckja zwracajaca nagłówek
	std::string GetHeader () {return m_header;}

	//funckja zwracajaca bufor (tekst)
	std::string GetText () {return m_text;}

private:
	//pole przechowujace nagłówek
	std::string m_header;

	//pole przechowujace tekst
	std::string m_text;
};
