#include "TelewizorLCD.h"
#include <iostream>
#include <string>

void TelewizorLCD::Wyswietl (const Zrodlo *zrodlo) const {
	std::cout<<"Polaczono telewizor i " << zrodlo->Nazwa()<<std::endl;

	for (int i=0; i<m_szer; i++) std::cout<<"-";
	std::cout<<std::endl;

	for (int i=0; i<m_wys; i++){
		for(int j=0; j<m_szer; j++) std::cout<<zrodlo->Znak();
		std::cout<<std::endl;
	}

	for (int i=0; i<m_szer; i++) i%2==0 ? std::cout<<'-' : std::cout<<" ";
	std::cout<<std::endl<<std::endl<<std::endl;
}

