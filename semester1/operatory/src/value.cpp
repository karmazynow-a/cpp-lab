#include "value.h"
#include <iostream>

int value::$ = 0;

value::integer value::integer::operator-(const value::integer & minus){
  this->m_value = this->m_value - minus.m_value;
  return value::$ = this->m_value;
}

value::integer value::integer::operator*(const value::integer & multiply){
  this->m_value = this->m_value * multiply.m_value;
  return value::$ = this->m_value;
}

value::integer value::integer::operator/(const value::integer & modulo){
  this->m_value=this->m_value % modulo.m_value;
  return value::$ = this->m_value;
}

std::ostream & value::operator<<(std::ostream & stream, const value::integer & intToConvert) {//intteger powinien być rhs bo jest z prawej
  stream << intToConvert.m_value;
  return stream;
}
