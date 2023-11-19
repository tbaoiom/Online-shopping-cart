#include "gameProduct.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// Getters
string GameProduct::getVersion (){
  return version;
}
ConsoleType GameProduct::getConsoleType (){
  return console;
}
string GameProduct::getConsoleAsString(){
  switch (console) {
    case ConsoleType::XBox:
      return "XBox";
    case ConsoleType::Playstation:
      return "Playstation";
    case ConsoleType::Nintendo:
      return "Nintendo";
    case ConsoleType::PC:
      return "PC";
    default:
      return "No Console Found";
  }
}

// Setters
void GameProduct::setVersion (std::string aVersion){
  version = aVersion;
}
void GameProduct::setConsoleType(ConsoleType aConsoleType){
  console = aConsoleType;
}

// Returns type of product as string
string GameProduct::getProdTypeStr (){
  string prodType = "Game";
  return prodType;
}
// Displays shared attributes
void GameProduct::displayProdInfo (){
  Product::displayProdInfo();
}
// Displays audio products private member variables
void GameProduct::displayContentsInfo(){
  cout << "Console: " << getConsoleAsString() << endl;
  cout << "Version: " << getVersion() << endl;
}