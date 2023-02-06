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
    Book(const std::string getTitle,const std::string getAuthor,const int getPageCount,const bool isDigital = false){
        book_title = getTitle;
        book_author = getAuthor;
        page_count = getPageCount;
        digital = true;
    }; 
    void setTitle(std::string getTitle);
    void setAuthor(std::string getAuthor);
    void setPageCount(int getPageCount);
    void setDigital(bool isDigital);
    std::string getTitle() ;
    std::string getAuthor() ;
    int getPageCount() ;
    bool isDigital() ; 
}; 

#endif
