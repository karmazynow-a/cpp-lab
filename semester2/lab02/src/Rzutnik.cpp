#include "Rzutnik.h"
#include <iostream>
#include <string.h>

void Rzutnik::Wyswietl (const Zrodlo *zrodlo) const{
	std::cout<<"Polaczono rzutnik i " << zrodlo->Nazwa()<<std::endl;

	for (int i=0; i<m_szer; i++) std::cout<<"_";
	std::cout<<std::endl;

	for (int i=0; i<m_wys; i++){
		for(int j=0; j<m_szer; j++) std::cout<<zrodlo->Znak();
		std::cout<<std::endl;
	}

	for (int i=0; i<m_szer; i++) i%2==0 ? std::cout<<'_' : std::cout<<" ";
	std::cout<<std::endl<<std::endl<<std::endl;
}


