#pragma once
#include <iostream>

class Node {
	public:

	Node (int val=0): m_val(val), m_next(nullptr){}
	//konstruktor, alokuje pamięć i ustawia wskaźnik na następny na NULL

	~Node() {m_val = 0; m_next = nullptr;}
	//destruktor, ustawia wskażnik na null i wartość na 0

	int data() const {return m_val;}
	//zwraca wartość m_val

	const Node * next() const {return m_next;}
	//zwaraca wskanik na nastepny element listy

	void setNext(Node * newNext) {m_next = newNext;}
	//ustawia wskaznik na wartość newNext

	void setVal(int newVal) {m_val = newVal;}
	//ustawia wartość na newVal

	private:
		int m_val;
		const Node * m_next;
};
