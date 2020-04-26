#pragma once

//klasa abstrakcyjna reprezentujaca dowolne urzadzenie
class Urzadzenie {
public:
	//zwracanie informacji o urzadzeniu
	virtual std::string rodzaj () const = 0;
};
