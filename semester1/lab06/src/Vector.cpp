#include "Vector.h"
#include <iostream>
#include "Matrix.h"

int MAX_VEC;

Vector* make_vec(int newSize){

	if (newSize > MAX_VEC) return NULL;
	Vector * newVector = new Vector;
	newVector->values = new int [newSize];
	for(int i=0; i<newSize; i++) newVector->values[i]=0;
	newVector->size = newSize;
	return newVector;
}

void value_set_vec (Vector * vec, int index, int newValue){
	if(vec==NULL) return ;
	if(index>vec->size) return ;
	vec->values[index]=newValue;
}

int size_vec(Vector * vec){
	if (vec==NULL) return 0;
	return vec->size;
}

void print_vec(Vector * vec){
	if(vec==NULL) std::cout<<"empty";
	else for(int i=0; i<vec->size; i++)
		std::cout<<vec->values[i]<<" ";
	std::cout<<std::endl;
}


Vector* from_matrix_row(Matrix* m, unsigned int row){
	if (m==NULL) return NULL;
	Vector * newVec = make_vec(m->column);
	for(int i=0; i<m->column; i++) newVec->values[i] = m->values[(row*m->column)+i];
	return newVec;
}

void del_vec (Vector * vec){
	if (vec==NULL) return;
	delete [] vec->values;
	delete vec;
	vec = NULL;
}


