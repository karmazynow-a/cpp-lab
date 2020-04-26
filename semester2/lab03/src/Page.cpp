#include "Page.h"

void Page::Print (){
	std::cout << "Page::header " << m_header <<std::endl;
	std::cout << "Page::text " << m_text << std::endl;
	std::cout<<std::endl;
}

Page *Page::Copy(){
	return new Page (m_header, m_text);
}
