#include "Trojkat.h"
#include <iostream>
#include <cmath>


void Trojkat::wypisz(std::ostream & os) const {	
	std::cout << "Trojkat o bokach:" << m_a << " " << m_b << " " << m_c << std::endl;
}


float Trojkat::polePow() const {
	float x = 0.5*(m_a + m_b + m_c);
	return sqrt(x*(x-m_a)*(x-m_b)*(x-m_c));
}
