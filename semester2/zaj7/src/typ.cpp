#include "typ.h"
#include "ObiektMiotajacy.h"

typ::~typ(){
	delete m_o;
}

void typ::PrzedstawSie() const {
	std::cout<<"Nazywam sie " << this->Typ() << " " << this <<std::endl;
}
