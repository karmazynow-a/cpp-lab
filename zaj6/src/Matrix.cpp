#include "Matrix.h"
#include <iostream>
#include "Vector.h"

Matrix * make_matrix (Vector * vec, int newRow, int newColumn){
	Matrix * newMat = new Matrix;
	newMat->values = new int [newRow*newColumn];
	newMat->row = newRow;
	newMat->column = newColumn;
	for(int i=0; i<newRow*newColumn; i++) newMat->values[i] = vec->values[i];
	return newMat;
}


void print_matrix(Matrix * mat){
	int x=mat->column;
	int y=mat->row;
	if(mat==NULL) return;
	for (int i=0; i < y ;i++){
		for(int j=0; j < x;j++){
			std::cout<< mat->values[j+(i*x)]<<" ";
		}
		std::cout<<std::endl;
	}
}
//wypisuje macierz


void del_matrix(Matrix * mat){
	if (mat==NULL) return;
	delete [] mat->values;
	delete mat;
}


