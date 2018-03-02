#include "Kwadrat.h"
#include <iostream>


void Kwadrat::wypisz(std::ostream & os) const {	
	std::cout << "Kwadrat o boku:" << m_bok << std::endl;
}


float Kwadrat::polePow() const {
	return m_bok * m_bok;
}
