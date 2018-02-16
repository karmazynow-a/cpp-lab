#include "List.h"
#include "Node.h"
#include <iostream>

List & List::insert ( int newVal, loc location){
	//iniclaizacja nowego węzła
	Node * newNode = new (Node);
	newNode->setVal(newVal);

	//pusta lista
	if (m_begin == nullptr){
		m_begin = newNode;
		m_end = newNode;
		return *this;
	}

	//niepusta lista
	if (location == Begin){
		newNode->setNext (m_begin);
		m_begin = newNode;
	}
	else {
		m_end->setNext(newNode);
		m_end = newNode;
	}
	return *this;
}


void List::print () const{
	std::cout<<"[ ";
	const Node * help = this->begin();
	while (help != nullptr) {
		std::cout<<" "<<help->data();
		help=help->next();
	}
	std::cout <<"]"<<std::endl;
}


List::~List(){
	if (m_begin == nullptr) return;
	const Node * help = this->begin();
	const Node * curr = this->begin();

	while (help != nullptr) {
		help = help->next();
		delete curr;
		curr = help;
	}
}


List::List ( List & newList ) : m_begin (nullptr), m_end(nullptr){
	const Node * help = newList.begin();

	while (help != nullptr){
		this->insert (help->data());
		help = help->next();
	}
}


const Node * List::find ( int val) const{
	const Node * help = this->begin();
	while (help != m_end) {
		if (help->data() == val) return help;
		help = help->next();
	}
	return nullptr;
}
