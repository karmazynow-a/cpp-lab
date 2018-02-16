#pragma once
#include <iostream>

//żeby robić np value::$, przestrzeń nazw
namespace value{

//zmienna globalna
extern int $;

class integer{
  public:
    friend std::ostream & operator<<(std::ostream & stream, const integer & intToConvert);

    //konstruktor kontertujący (bo przyjmuje argument int) z int na klase o wartości m_value równej temu intowi
    integer (int newValue) : m_value (newValue) {}

    //przeładowanie operatora - różnica wartości - TYLKO JEDEN ARGUMENT< BO DRUGIM DOMYŚLNIE JEST THIS
    integer operator-(const integer & minus);

    //przeładowanie operatora * - iloczyn wartości
    integer operator*(const integer & multiply);

    //przeładowanie operatora / - iloraz całkowity (modulo)
    integer operator/(const integer & modulo);

  private:
    int m_value;
};

//konstruktor konwertujący z int na klase - linijka 18 - bo = zrobi przypisanie z skonstruowanego obieltu z ina i przypisze go do x
//konstruktor konwertujący z klasy na int - linijka 19
//lub przeładowanie operatora co z jednej storny ostream z drugiej klase
//działania - odejmuje inta (albo klase która sie skonweruje do inta)
//* int
// \ całkowite
// <<

std::ostream & operator<<(std::ostream & stream, const integer & intToConvert);

}
