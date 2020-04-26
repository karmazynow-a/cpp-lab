#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Page.h"

class Book{
public:
	//konstruktor, inicjalizujacy autora i tytuł, ustawiajacy możliwe strony do dopisywania
	Book (std::string title = "dummy", std:: string author = "anonym"): m_author (author), m_title (title), m_currentPage(1) {};

	//funkcja dodajaca nowa strone
	void AddPage (Page * page);

	//funkcja kopujaca do obiektu dane z innego, danego obiektu
	void Copy (Book * book);

	//funckja wypisujaca dane 
	void Print ();

	//funckja ustwaiajaca tytuł
	void AddTitle (std::string title);

	//funkcja ustawiajaca nagłówki
	void AddHeader (std::string header);

	//funkcja ustawiajaca tekst na kolejnych stronach, pod warunkiem ze ilość możliwych sie niewyczerpie
	void AddText (std::string text);

	//funkcja zwracajaca tytuł
	std::string GetTitle() {return m_title;}

	//funkcja zwracajaca autora
	std::string GetAuthor() {return m_author;}

	//funkcja zwracajaca strony
	std::vector<Page> GetPages() {return m_pages;}

private:
	//pole przechowujaca tytuł
	std::string m_title;

	//pole przechowujaca autora
	std::string m_author;	

	//pole przechowujaca strony
	std::vector<Page> m_pages;

	//pole przechowujace aktualna strone do pisania
	unsigned m_currentPage;
};
