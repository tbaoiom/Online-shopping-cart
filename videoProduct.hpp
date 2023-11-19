#ifndef VIDEO_PRODUCT_HPP
#define VIDEO_PRODUCT_HPP

#include <string>
#include "product.hpp"

enum FilmRateType {
  NotRated,
  G,
  PG,
  PG_13, 
  R,
  NC_17
};

class VideoProduct : public Product {
  public:
    VideoProduct() : Product(){}; // default constructor
    VideoProduct(std::string aProdName, double aPrice, NameType aDirectorName, int aReleaseYear, int aRunTime):
    Product(aProdName, aPrice){director = aDirectorName, releaseYear = aReleaseYear, runTime = aRunTime;}; // constructor

    //Getters
    NameType getDirector();
    std::string getFilmRateType();
    int getRunTime();
    int getReleaseYear();
    //Setters
    void setDirector(NameType aDirector);
    void setFilmRateType(FilmRateType aFilmRateType);
    void setRunTime(int aRunTime);
    void setReleaseYear(int aReleaseYear);

  private:
    NameType director;
    FilmRateType filmRate;
    int releaseYear;
    int runTime;

    std::string getProdTypeStr(); // returns film
    void displayProdInfo();
    void displayContentsInfo(); // displays video product private attributes
};

#endif