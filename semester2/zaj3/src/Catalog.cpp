#include "Catalog.h"

void Catalog::Print(){
	std::cout << "Catalog::name " << m_name <<std::endl;
	for (int i=0; i<m_books.size(); i++)
		std::cout<< "Catalog::book(" << i << ") " << m_books[i]->GetTitle() << std::endl;
	std::cout<<std::endl;
}

Catalog::~Catalog (){
	for (int i=0; i<m_books.size(); i++) delete m_books[i];
	m_books.clear();
}
