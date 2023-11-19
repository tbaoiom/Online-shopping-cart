#ifndef BOOK_PRODUCT_HPP
#define BOOK_PRODUCT_HPP

#include <string>
#include "product.hpp"

class BookProduct : public Product {
  public:
    BookProduct() : Product(){}; // default constructor
    BookProduct(std::string aProdName, double aPrice, NameType anAuthor, int pageNum):
    Product(aProdName, aPrice){author = anAuthor, pages = pageNum;}; // constructor

    //Getters
    NameType getAuthor();
    int getPages();
    //Setters
    void setAuthor(NameType anAuthor);
    void setPages(int aPageNum);

  private:
    NameType author;
    int pages;

    std::string getProdTypeStr() = 0; // pure virtual
    void displayProdInfo();
    void displayContentsInfo(); // displays book product private attributes
};

#endif