#include <iostream>
#include <string>
#include "Book.hpp"

    Book::Book(){
        book_title = "";
        book_author = "";
        page_count = 0;
        digital = false;
    }

    Book::Book(const std::string Title,const std::string Author,const int PageCount,const bool Digital){
        book_title = Title;
        book_author = Author;
        page_count = PageCount;
        digital = Digital;
    }

    void Book::setTitle(const std::string Title){
        this->book_title = Title;
    };

    std::string Book::getTitle() const{
        return this->book_title;
    };

    void Book::setAuthor(const std::string Author){
        this->book_author = Author;
    };

    std::string Book::getAuthor() const{
        return this->book_author;
    };

    void Book::setPageCount(const int PageCount){
        if(PageCount > 0){
            this->page_count = PageCount;
        }
    };

    int Book::getPageCount() const{
        return this->page_count;
    };

    void Book::setDigital(){
        this->digital = true;
    };
    
    bool Book::isDigital() const{
        return this->digital;
    };
