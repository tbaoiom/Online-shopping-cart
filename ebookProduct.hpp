#ifndef E_BOOK_PRODUCT_HPP
#define E_BOOK_PRODUCT_HPP

#include <string>
#include "bookProduct.hpp"

class EBookProduct : public BookProduct {
  public:
    EBookProduct() : BookProduct(){}; // default constructor
    EBookProduct (std::string aProdName, double aPrice, NameType anAuthor, int pageNum):
    BookProduct(aProdName, aPrice, anAuthor, pageNum){}; // constructor
  private:
    std::string getProdTypeStr(); // returns E-book
};

#endif