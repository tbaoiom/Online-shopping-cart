#ifndef PAPER_PRODUCT_HPP
#define PAPER_PRODUCT_HPP

#include <string>
#include "bookProduct.hpp"

class PaperProduct : public BookProduct {
  public:
    PaperProduct() : BookProduct(){}; // default constructor
    PaperProduct (std::string aProdName, double aPrice, NameType anAuthor, int pageNum):
    BookProduct(aProdName, aPrice, anAuthor, pageNum){}; // constructor

  private:
    std::string getProdTypeStr(); // returns paper book
};

#endif