#include "Kolo.h"
#include <iostream>


void Kolo::wypisz(std::ostream & os) const {	
	std::cout << "Kolo o promieniu:" << m_promien << std::endl;
}


float Kolo::polePow() const {
	return m_promien*m_promien*3.1415;
}
