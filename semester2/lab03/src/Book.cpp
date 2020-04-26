#include "Book.h"

void Book::Copy (Book * book){
	m_title = book->GetTitle();
	m_author = "(copy) " + book->GetAuthor();
	for (int i=0; i < book->GetPages().size(); i++) m_pages.push_back (book->GetPages()[i]);
}

void Book::Print (){
	std::cout<< "Book::autor " << m_author << std::endl;
	for (int i=0; i<m_pages.size(); i++)
		std::cout<< "Page(" << i << ")::text " << m_pages[i].GetText() << "(header: " << m_pages[i].GetHeader() << ")" << std::endl;
	std::cout<<std::endl;
}

void Book::AddTitle (std::string title){
	m_title = title;
	m_pages[0].AddText(title);
}

void Book::AddHeader (std::string header){
	for (int i=1; i<m_pages.size(); i++){
		m_pages[i].AddHeader(header);
	}
}

void Book::AddText (std::string text){
	if (m_currentPage == m_pages.size()) std::cout<<"[ERROR]:: No enough pages in the book!"<<std::endl<<std::endl;
	else{
		m_pages[m_currentPage].AddText(text);
		m_currentPage ++;
	}
}

void Book::AddPage (Page * page) {
	if (m_pages.empty()){
		Page * titlePage = page->Copy();
		if (m_title == "dummy") titlePage->AddText("Title page");
		else titlePage->AddText("Title: " + m_title);
		titlePage->AddHeader("empty");
		m_pages.push_back (*titlePage);
		delete titlePage;
	}
	m_pages.push_back (*page);
}


