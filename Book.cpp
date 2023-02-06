#include <iostream>
#include <string>
#include "Book.hpp"

void setTitle(std::string getTitle){
        book_title = getTitle;
    }
    std::string getTitle(){
        return book_title;
    }

    void setAuthor(std::string getAuthor){
        book_author = getAuthor;
    }
    std::string getAuthor(){
        return book_author;
    }

    void setPageCount(int getPageCount){
        if(getPageCount > 0){
            page_count = getPageCount;
        }
    }
    int getPageCount(){
        return page_count;
    }
    void setDigital(bool isDigital){
        if(isDigital == 1){
            digital = true;
        }
        else{
            digital = false;
        }
    }
    bool isDigital(){
        return digital;
    }
