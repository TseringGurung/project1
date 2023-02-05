#ifndef Book_H
#define Book_H
#include <iostream>

class Book{
private:
    std::string book_title;
    std::string book_author;
    int page_count;
    bool digital;
public:
    Book();
    Book(std::string getName,std::string getAuthor, int getPageCount,bool isDigital);
    void setname();
    void setAuthor();
    int setPageCount();
    bool setDigital();
};

#endif
