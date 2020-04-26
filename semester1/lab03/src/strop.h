#ifndef STROP_H
#define STROP_H

struct delimited{		//pomocnicza struktura
	const char * textStart;
	const char *textEnd;		// łańcuch znaków na wejściu
	char sign;			// znak, którym bedziemy rozdzielać
	const char * partStart;
	const char * partEnd;

};

void chunk (const char * newText, delimited * divide, char newSign);
//funkcja inicjalizująca strukturę, przypisuje nowy łańcuch i znak dzielenia do struktury divide
bool next (delimited * divide);
//zwraca, czy są jeszcze fragmenty łańcucha do wydzielenia i przygotowywuje do wydzielenia
void part (delimited * divide, char *buffor);
//zwraca wydzielooną część, znajdującą sie w buforze
const char*  next_delim(const char * part, delimited * divide);
//funckja która zwraca wskaźnik na pierwszy znak poza łancuchem
const char*  next_not_delim(const char * part, delimited * divide);
// funkcja która zwraca wskaznik na pierwszy znak łańcucha



#endif

