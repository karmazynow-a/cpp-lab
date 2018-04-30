#include "ObiektMiotajacy.h"


void ObiektMiotajacy::Rzuc() {
	typ *t = new typ1(); 
	t->setObiekt(this);
	throw (static_cast<typ1*>(t));
}

void Przetworz (typ * t){
	std::cout<< "Przetworz - wyjatek typu "<< t->Typ() <<" o adresie: "<< t <<std::endl;
	delete t;
	t = new typ4(); 
	throw (static_cast<typ4*>(t));
}
