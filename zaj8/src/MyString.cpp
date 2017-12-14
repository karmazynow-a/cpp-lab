#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString(){
	m_size = 0;
	m_str = nullptr;
}

MyString::MyString(const char* newStr){
	setStr(newStr);
}

MyString::~MyString(){
	std::cout<< "- deleting "<< m_str <<std::endl;
	delStr();
}

void MyString::setStr(const char* newStr){
	m_size = strlen(newStr);
	m_str = new char [m_size + 1];
	strcpy(m_str, newStr);
	m_str [m_size + 1] = '\0';	
}

char *MyString::str() const{
	return m_str;
}

int MyString::Size() const{
	return m_size;
}


void MyString::join (const MyString & secStr){
	char * newStr = new char [m_size + secStr.m_size +1];

	strcpy (newStr, m_str);
	strcpy (newStr + m_size, secStr.m_str);
	
	delStr();
	m_str = new char [m_size + secStr.m_size + 1];
	strcpy(m_str, newStr);
	newStr[m_size + secStr.m_size +1] = '\0';
	delete [] newStr;
}


void MyString::replace (const char* newStr){
	delStr();
	setStr (newStr);
}

void MyString::delStr(){
	if (m_str==nullptr) return;
	delete [] m_str;
	m_str=nullptr;
}


void swap (MyString &myStr1, MyString &myStr2){
	char helper [myStr1.Size()];
	strcpy (helper, myStr1.str());
	myStr1.replace(myStr2.str());
	myStr2.replace(helper);
}



