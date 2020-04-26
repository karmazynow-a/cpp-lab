#ifndef MATRIX_H
#define MATRIX_H

//#include "Vector.h"
//#include "Vector.cpp"

struct Vector;

struct Matrix {
	int *values;
	int row;
	int column;

};

Matrix * make_matrix (Vector * vec, int newRow, int newColumn);
//tworzy nową macierz z wektora vec - alokujac pamiec na watorsci przechowywane ii na całą strukturę

void print_matrix(Matrix * mat);
//wypisuje macierz mat

void del_matrix(Matrix * mat);
//usuwa macierz, dealokuje przydzielona pamiec
#endif
