#ifndef GAME_PRODUCT_HPP
#define GAME_PRODUCT_HPP

#include "product.hpp"
#include <string>

enum ConsoleType {
  XBox,
  Playstation,
  Nintendo,
  PC
};

class GameProduct : public Product {
  public:
    GameProduct() : Product(){}; // default constructor
    GameProduct(std::string aProdName, double aPrice, ConsoleType aConsole, std::string aVersion):
    Product(aProdName, aPrice){console = aConsole; version = aVersion;}; // constructor

    // Getters
    std::string getVersion();
    ConsoleType getConsoleType();
    std::string getConsoleAsString();

    // Setters
    void setVersion(std::string aVersion);
    void setConsoleType(ConsoleType aConsoleType);

  private:
    std::string version;
    ConsoleType console;

    // Virtual functions
    std::string getProdTypeStr();  // returns game string
    void displayProdInfo();
    void displayContentsInfo(); // display unique attributes
};

#endif