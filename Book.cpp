#include <iostream>
#include <string>
#include "book.hpp"

    void Book::setTitle(std::string getTitle){
        book_title = getTitle;
    }
    std::string Book::getTitle() {
        return book_title;
    }

    void Book::setAuthor(std::string getAuthor){
        book_author = getAuthor;
    }
    std::string Book::getAuthor() {
        return book_author;
    }

    void Book::setPageCount(int getPageCount){
        if(getPageCount > 0){
            page_count = getPageCount;
        }
    }
    int Book::getPageCount(){
        return page_count;
    }
    void Book::setDigital(bool isDigital){
        if(isDigital == 1){
            digital = true;
        }
        else{
            digital = false;
        }
    }
    bool Book::isDigital() {
        return digital;
    }