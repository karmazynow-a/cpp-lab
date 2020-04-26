#include "FVec.h"
#include <iostream>
#include <cmath>


FVec::FVec (int newLen): m_beg(0), m_end(newLen){
	m_t = new int [newLen+1];
	for (int i=0; i<=m_end; i++) m_t[i]=0;
}

		
FVec::FVec (int newBegin, int newEnd) : m_beg(newBegin), m_end (newEnd){
	m_t = new int [len()+1];	
	for (int i=0; i<=len(); i++) *(m_t+i)=0;	
}

		
FVec & FVec::set (int index, int newValue){
	//*(m_t + index - m_beg) = newValue;
	m_t[index] = newValue;
	return *this;
}
		
FVec::~FVec() {delete []m_t;}

void FVec::print ( const char * text ) const{
	std::cout<<text<<"idx["<<m_beg<<","<<m_end<<"]";
	for( int i=0; i<=len(); i++) std::cout<< " " << *(m_t+i);
	std::cout<<std::endl;
}


int & FVec::operator[](int index) {return m_t [index - m_beg];}
		

FVec & FVec::operator=(FVec & other){
	//if (other == *(this)) return *this;
	
	delete []this->m_t;

	this->m_beg = other.m_beg;
	this->m_end = other.m_end;
	this->m_t = new int [this->len()+1];
	
	for (int i=0; i<=this->len(); i++) m_t[i]=other.m_t[i];
	return *this; 
}


int FVec::len() const{
	if (m_beg*m_end > 0) return abs(m_end - m_beg);
	else return abs(m_beg) + abs(m_end) -1;
}


FVec::FVec ( FVec & other){
	this->m_beg = other.m_beg;
	this->m_end = other.m_end;
	this->m_t = new int [this->len()+1];
	
	for (int i=0; i<=this->len(); i++) m_t[i]=other.m_t[i];
}
