#ifndef AUDIO_PRODUCT_HPP
#define AUDIO_PRODUCT_HPP

#include <string>
#include "product.hpp"

enum GenreType {
  Blues = 0,
  Classical,
  Country,
  Folk, 
  Jazz,
  Metal,
  Pop,
  RnB, 
  Rock,
  Rap
};

class AudioProduct : public Product {
  public:
    AudioProduct() : Product(){}; // default constructor
    AudioProduct(std::string aProdName, double aPrice, NameType aSinger):
    Product(aProdName, aPrice){singer = aSinger;};

    // Getters
    NameType getSinger();
    std::string getGenre();
    // Setters
    void setSinger(NameType aSinger);
    void setGenre(GenreType aGenre);

  private:
    NameType singer;
    GenreType genre;

    std::string getProdTypeStr(); // returns music string
    void displayProdInfo();
    void displayContentsInfo(); // displays private attributes
};

#endif