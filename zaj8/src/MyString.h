#ifndef MYSTRING_H
#define MYSTRING_H

//klasa, która obsługuje działania na łańcuchach
class MyString {
	public:
		MyString();
		//konstruktor domyslny ustawiający wskaznik na null i rozmiar 0
		MyString (const char* newStr);
		//konstruktor ustawiający łańcuch na newStr
		~MyString();
		//dekonstruktor zwalniający pamięć na łańcuch
		int Size() const;
		//funkcja zwracająca rozmiar
		char *str() const;
		//funkcja zwracająca łańcuch
		void join (const MyString & secStr);
		//funkcja łącząca łańcuch klasy z łańcuchem secStr
		void replace (const char* newStr);
		//funkcja zmieniająca łańcuch na nowy newStr

	private:
		char *m_str;	
		//tablica z lancuchami
		int m_size;		
		//rozmiar lancucha
		void setStr(const char* newStr);
		//funkcja, która alokuje pamiec na łańcuch m_str
		void delStr();
		//funkcja która dealokuje pamięć na łańcuch

};

void swap (MyString &myStr1, MyString &myStr2);
//funkcja, która zamienia łańcuchy pomiędzy dwoma klasami


#endif
