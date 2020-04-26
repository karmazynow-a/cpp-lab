#pragma once

class FVec {
	public:
		//kontruktor tworzący tablicy o domyślnym początkowym indeksie =0 i ostatnim równym newLen-1
		FVec (int newLen);

		//konstruktor tworzący tablicę o początkowym indeksie newBegin i ostatnim newEnd-1
		FVec (int newBegin, int newEnd);

		//destruktor, usuwający alokacje pamięci
		~FVec();

		//funkcja przypisująca wartość newValue pod indeksem index
		FVec & set (int index, int newValue);

		//wypisanie listy
		void print (const char * text = "") const;

		//przeładowany operator, zwracający wartość pod wybranym indeksem
		int & operator[](int index);

		//przeładowany operator przypisujący tablicę
		FVec & operator=(FVec & other);

		//funkcja zwracająca pierwszy indeks
		int begin () const {return m_beg;}

		//funkcja zwracająca 1 indeks poza tablicą
		int end () const {return m_end + 1;}

		//konstruktor kopiujący
		FVec ( FVec & other);

	private:
		//funkcja zwracająca długość tablicy
		int len () const;

		int *m_t;		//wskaznik do tablicy przechowywującej wartosci
		int m_beg;	//wartość 1 indeksu
		int m_end; 	// wartość ostatniego indeksu
};

