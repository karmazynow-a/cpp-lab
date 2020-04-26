#ifndef VECTOR_H
#define VECTOR_H

//#include "Matrix.h"

struct Matrix;

struct Vector{
	int size;
	int *values ;
	
};

extern int MAX_VEC;

Vector* make_vec(int newSize);
//utworzenie wektora o ilości newSize wspolrzednych, o ile jest to dozwolone, alokujemy na niego pamiec i na tablice ze wspolrzednymi

int size_vec(Vector * vec);
//zwraca rozmiar wektora;

void print_vec(Vector * vec);
//wypisuje wektor

void value_set_vec (Vector * vec, int index, int newValue);
//ustawia wartość newValue pod indeksem index, w wektorze vec;

Vector* from_matrix_row(Matrix* m, unsigned int row);
//przypisanie do nowego wektora wybranego rzędu row macierz m

void del_vec (Vector * vec);
//usuwa wektor, dealokuje pamiec przydzieloną na wektor i na tablice wspolrzednych



#endif
