#include "bookProduct.hpp"
#include <iostream>

using std::cout;
using std::endl;

// Getters
NameType BookProduct::getAuthor (){
  return author;
}
int BookProduct::getPages (){
  return pages;
}

// Setters
void BookProduct::setAuthor (NameType anAuthor){
  author = anAuthor;
}
void BookProduct::setPages (int aPageNum){
  pages = aPageNum;
}

// Displays attributes
void BookProduct::displayProdInfo (){
  Product::displayProdInfo();
}
// Book product private attribute information, pages
void BookProduct::displayContentsInfo(){
  cout << "Author: " << author.firstName << " " << author.lastName << endl;
  cout << "Pages: " << pages << endl;
}