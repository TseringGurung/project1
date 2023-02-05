#include "Book.hpp"
#include "main.cpp"

    void setName(std::string getName){
        book_title = getName;
    }
    std::string getName(){
        return book_title;
    }

    void setAuthor(std::string getAuthor){
        book_author = getAuthor;
    }
    std::string getAuthor(){
        return book_author;
    }

    int setPageCount(int getPageCount){
        if(getPageCount > 0){
            page_count = getPageCount;
        }
    }
    int getPageCount(){
        return page_count;
    }
    bool setDigital(bool isDigital){
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
