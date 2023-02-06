#include <iostream>
#include <string>
#include "book.hpp"

    Book::Book(const std::string getTitle,const std::string getAuthor,const int getPageCount,const bool isDigital = false){
        book_title = getTitle;
        book_author = getAuthor;
        page_count = getPageCount;
        digital = true;
    };

    void Book::setTitle(const std::string getTitle){
        book_title = getTitle;
    };

    std::string Book::getTitle() const{
        return book_title;
    };

    void Book::setAuthor(const std::string getAuthor){
        book_author = getAuthor;
    };

    std::string Book::getAuthor() const{
        return book_author;
    };

    void Book::setPageCount(const int getPageCount){
        if(getPageCount > 0){
            page_count = getPageCount;
        }
    };

    int Book::getPageCount() const{
        return page_count;
    };

    void Book::setDigital(){
        digital = true;
    };
    
    bool Book::isDigital() const{
        if(digital == 1){
            return true;
        }
        else{
            return false;
        }
        return digital;
    }; 
