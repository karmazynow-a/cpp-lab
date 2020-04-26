#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Book.h"

class Catalog{
public:
	//konstruktor inicjalizujacy nazwe katalogu podaną lub domyślna
	Catalog (std::string name = "no name"): m_name (name) {};

	//funkcja dodajaca nową książke do katalogu
	void AddBook (Book * book) {m_books.push_back(book);}

	//funkcja wypisujaca dane obiektu
	void Print();

	//destruktor niszczący wszystkie obiekty książek w katalogu
	~Catalog ();

private:
	//pole przechowujace nazwe katalogu
	std::string m_name;

	//pole przechowujace książki w katalogu
	std::vector<Book *> m_books;
};
