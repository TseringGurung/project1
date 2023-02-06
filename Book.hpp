#ifndef BOOK_H
#define BOOK_H

class Book{
private:
    std::string book_title;
    std::string book_author;
    int page_count;
    bool digital;
public:
    Book();
    Book(const std::string getTitle,const std::string getAuthor,const int getPageCount,const bool isDigital = false);

    void setTitle(const std::string getTitle);
    void setAuthor(const std::string getAuthor);
    void setPageCount(const int getPageCount);
    void setDigital();
    std::string getTitle() const;
    std::string getAuthor() const;
    int getPageCount() const;
    bool isDigital() const; 
}; 

#endif
