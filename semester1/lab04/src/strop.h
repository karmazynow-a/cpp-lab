#ifndef STROP_H
#define STROP_H

struct delimited{				// pomocnicza struktura
	const char * textStart;		// wskaznik na łańcuch znaków na wejściu
	const char *textEnd;		// wskaznik na koniec lancucha
	char sign;					// znak, którym bedziemy rozdzielać
	const char * partStart;		// wskanzik na poczatek wydzielonego fragmentu
	const char * partEnd;		// wskaznik na pierwszy znak poza fragmentem

};

void chunk (const char * newText, delimited * divide, char newSign);
//funkcja inicjalizująca strukturę, przypisuje nowy łańcuch newText i znak dzielenia newSign do struktury divide

bool next (delimited * divide);
//zwraca, czy są jeszcze fragmenty łańcucha do wydzielenia i przygotowywuje do wydzielenia

void get_fragment (delimited * divide, char *buffor);
//przypisuje wydzielony fragment do lanucha buffor

const char*  next_delim(const char * part, delimited * divide);
//zwraca wskaźnik na pierwszy znak poza łancuchem

const char*  next_not_delim(const char * part, delimited * divide);
//zwraca wskaznik na pierwszy znak łańcucha

int fragment_size (delimited *divide);
//zwracajaca długosc fragmentu przygotowanego do wydzielenia w bajtach

void rewind (delimited *divide);
//przewija wskaźnik na poczatek lancucha w strukturze divide

void previous (delimited *divide);
//przygotowywuje poprzednie slowo do wydzielenia

const char*  previous_delim(const char * part, delimited * divide);
//zwraca wskaznik na pierwszy wczesniejszy znak spoza lancucha

const char*  previous_not_delim(const char * part, delimited * divide);
//zwraca wskaznik na pierwszy wczesniejszy znak lancuhca


#endif
