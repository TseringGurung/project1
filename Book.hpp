#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book{

private:
    std::string book_title;
    std::string book_author;
    int page_count;
    bool digital;
public:
    
    Book();
    Book(const std::string Title,const std::string Author,const int PageCount,const bool Digital = false);

    void setTitle(const std::string Title);
    std::string getTitle() const;
    
    void setAuthor(const std::string Author);
    std::string getAuthor() const;
   
    void setPageCount(const int PageCount);
    int getPageCount() const;

    void setDigital();
    bool isDigital() const; 
}; 

#endif
