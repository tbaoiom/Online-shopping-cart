#include "videoProduct.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//Getters
NameType VideoProduct::getDirector (){
  return director;
}
string VideoProduct::getFilmRateType (){
  switch (filmRate) {
    case (FilmRateType::G):
      return "G";
    case (FilmRateType::PG):
      return "PG";
    case (FilmRateType::PG_13):
      return "PG-13";
    case (FilmRateType::R):
      return "R";
    case (FilmRateType::NC_17):
      return "NC-17";
    default:
      return "Not Rated";
  }
}
int VideoProduct::getRunTime (){
  return runTime;
}
int VideoProduct::getReleaseYear (){
  return releaseYear;
}

//Setters
void VideoProduct::setDirector (NameType aDirector){
  director = aDirector;
}
void VideoProduct::setFilmRateType (FilmRateType aFilmRateType){
  filmRate = aFilmRateType;
}
void VideoProduct::setRunTime (int aRunTime){
  runTime = aRunTime;
}
void VideoProduct::setReleaseYear (int aReleaseYear){
  releaseYear = aReleaseYear;
}

// Returns film string
string VideoProduct::getProdTypeStr () {
  string prodType = "Movie";
  return prodType;
}
// Displays shared attributes
void VideoProduct::displayProdInfo() {
  Product::displayProdInfo();
}
// Displays video products private member variables
void VideoProduct::displayContentsInfo() {
  cout << "Director: " << director.firstName << " " << director.lastName << endl;
  cout << "Film Rating: " << getFilmRateType() << endl;
  cout << "Release Year: " << releaseYear << endl;
  cout << "Movie Length: " << runTime << endl;
}