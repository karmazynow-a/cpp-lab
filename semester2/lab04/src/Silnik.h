#pragma once

#include <string>

class Silnik {
public:
	//konstruktor inicjalizujacy wartosci m_moc, m_pojemnosc i m_paliwo na domyślne lub podane
	Silnik (int moc = 0, float pojemnosc = 0.0, std::string paliwo = "brak danych"): m_moc(moc), m_pojemnosc(pojemnosc), m_paliwo (paliwo) {}

protected:
	//pole przechowujace informacje o mocy obiektu
	int m_moc;

	//pole przechowujace informacje o pojemnosci obiektu
	float m_pojemnosc;

	//pole przechowujace informacje o typie paliwa obiektu
	std::string m_paliwo;
};
