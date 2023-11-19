#include "audioProduct.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Getters
NameType AudioProduct::getSinger (){
  return singer;
}
string AudioProduct::getGenre (){
  switch (genre) {
    case GenreType::Blues:
      return "Blues";
    case GenreType::Classical:
      return "Classical";
    case GenreType::Country:
      return "Country";
    case GenreType::Folk:
      return "Folk";
    case GenreType::Jazz:
      return "Jazz";
    case GenreType::Metal:
      return "Metal";
    case GenreType::Pop:
      return "Pop";
    case GenreType::RnB:
      return "RnB";
    case GenreType::Rock:
      return "Rock";
    case GenreType::Rap:
      return "Rap";
    default:
      return "No Genre Type";
  }
}

// Setters
void AudioProduct::setSinger (NameType aSinger){
  singer = aSinger;
}
void AudioProduct::setGenre (GenreType aGenre){
  genre = aGenre;
}

// Returns type of product as string
string AudioProduct::getProdTypeStr (){
  string prodType = "Music";
  return prodType;
}
// Displays shared attributes
void AudioProduct::displayProdInfo (){
  Product::displayProdInfo();
}
// Displays audio products private member variables
void AudioProduct::displayContentsInfo(){
  cout << "Singer: " << singer.firstName << " " << singer.lastName << endl;
  cout << "Genre: " << getGenre() << endl;
}