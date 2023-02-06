#ifndef BOOK_H
#define BOOK_H

class Book{
private:
    std::string book_title;
    std::string book_author;
    int page_count;
    bool digital;
public:
    Book(){};
    Book(std::string getName,std::string getAuthor, int getPageCount,bool isDigital = false){};
};

#endif

