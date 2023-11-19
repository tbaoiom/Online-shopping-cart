#include <iostream>
#include "product.hpp"
#include "audioProduct.hpp"
#include "videoProduct.hpp"
#include "bookProduct.hpp"
#include "ebookProduct.hpp"
#include "paperProduct.hpp"
#include "gameProduct.hpp"
#include "cart.hpp"
#include "customer.hpp"

int main() {

  // create customer and cart
  NameType myName = {"Tai", "Bui"};
  Cart myCart;

  Customer me(myName, &myCart);
  me.setEmail("me@gmail.com");  
  
  // create 3 audioProduct objects, 1 ebook and 1 paper book objects
  NameType audioName1 {"Beetles", ""};
  AudioProduct* music1 = new AudioProduct("Yesterday", 16.50, audioName1);
  music1->setGenre(GenreType::Pop);
  music1->setReviewRate(9.8);
  
  NameType audioName2 {"Joey", "Badass"};
  AudioProduct* music2 = new AudioProduct("Righteous Minds", 10.70, audioName2);
  music2->setGenre(GenreType::Rap);
  music2->setReviewRate(6.2);
  
  NameType audioName3 {"Claude", "Debussy"};
  AudioProduct* music3 = new AudioProduct("Claire De Lune", 15.30, audioName3);
  music3->setGenre(GenreType::Classical);
  music3->setReviewRate(7.5);
  
  // create 2 videoProduct objects
  NameType videoName1 {"Christopher", "Nolan"};
  VideoProduct* film1 = new VideoProduct("Interstellar", 23.99, videoName1, 2014, 169);
  film1->setFilmRateType(FilmRateType::PG_13);
  film1->setReviewRate(8.6);

  NameType videoName2 {"Andrew", "Adamson"};
  VideoProduct* film2 = new VideoProduct("Shrek 2", 15.59, videoName1, 2004, 105);
  film2->setFilmRateType(FilmRateType::PG_13);
  film2->setReviewRate(7.3);

  // create an eBook object
  NameType book1 {"Eoin", "Colfer"};
  EBookProduct* eBook = new EBookProduct("Artemis Fowl", 7.99, book1, 280);
  eBook->setReviewRate(9.2);

  // create game object
  GameProduct* game1 = new GameProduct("Teamfight Tactics", 0.00, ConsoleType::PC, "1");
  game1->setReviewRate(8.3);

  // create a paper object
  NameType book2 {"F. Scott", "Fitzgerald"};
  PaperProduct* paperBook = new PaperProduct("The Great Gatsby", 6.50, book1, 208);
  paperBook->setReviewRate(9.0);

  // add 7 items into the cart
  myCart = myCart + music1 + music2 + music3 + film1 + film2 + eBook + game1 + paperBook;
  
  // remove 2 items from the cart
  myCart.removeItem(music1->getProdID());
  myCart.removeItem(film2->getProdID());
  // display cart
  me.displayCustomerReport();
}