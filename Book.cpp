/*
Name: Tsering Gurung
Date: 02/09/2023
Class: CS 235
Professor: Tiziana Ligorio
Assignment: Book.cpp
Project 1: Create a book class.
*/

#include <iostream>
#include <string>
#include "Book.hpp"

    /*Deafault Constructor*/
    Book::Book(){
        book_title = "";
        book_author = "";
        page_count = 0;
        digital = false;
    }

    /*Parameterized Constructor*/
    Book::Book(const std::string Title,const std::string Author,const int PageCount,const bool Digital){
        book_title = Title;
        book_author = Author;
        page_count = PageCount;
        digital = Digital;
    }

    /**
    @param  : the title of the Book
    @post   : sets the Book's title to the value of the parameter
    */
    void Book::setTitle(const std::string Title){
        this->book_title = Title;
    };

    /**
     @return : the title of the Book
    */
    std::string Book::getTitle() const{
        return this->book_title;
    };

    /**
    @param  : the name of the author of the Book
    @post   : sets the Book's author to the value of the parameter
    */
    void Book::setAuthor(const std::string Author){
        this->book_author = Author;
    };

    /**
      @return : the author of the Book
    */
    std::string Book::getAuthor() const{
        return this->book_author;
    };

     /**
    @param  : a positive integer page count
    @pre    : page count > 0 - books cannot have a negative number of pages
    @post   : sets the page count to the value of the parameter
    */
    void Book::setPageCount(const int PageCount){
        if(PageCount > 0){
            this->page_count = PageCount;
        }
    };

    /**
      @return : the page count
    */
    int Book::getPageCount() const{
        return this->page_count;
    };

    /**
    @post   : sets the digital flag to true
    */
    void Book::setDigital(){
        this->digital = true;
    };
    
    /**
    @return true if the book is available in digital form, false otherwise

    Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
    */
    bool Book::isDigital() const{
        return this->digital;
    }; 
