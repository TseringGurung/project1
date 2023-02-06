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
    Book(std::string getTitle,std::string getAuthor, int getPageCount,bool isDigital = false){
        book_title = getTitle;
        book_author = getAuthor;
        page_count = getPageCount;
        digital = true;
    }; 
};

#endif

