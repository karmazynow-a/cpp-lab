#pragma once
#include "Node.h"

class Node;

class List {
	public:

	enum loc {Begin, End};

	List &insert ( int n = 0, loc = End);
	//funkcja dodajaca element do list, w zależności od wyboru
	void print () const;
	//funkcja wypisujaca elementy listy
	List() : m_begin (nullptr), m_end (nullptr) {}
	//konstruktor
	~List();
	//destruktor
	List (List & newList);
	//konstruktor kopiujacy
	const Node * find ( int val) const;
	//zwaraca wskaznik na element o szukanej wartości
	const Node * begin () const {return m_begin;}
	//zwraca wskaznik na poczatek
	const Node * end () const {return m_end;}
	//zwraca wskaznik na koniec


	private:
		Node * m_begin;	//wskaznik na poczatek
		Node * m_end;		//wskaznik na koniec
};
