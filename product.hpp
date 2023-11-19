#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

struct NameType {
  std::string firstName;
  std::string lastName;
};

typedef int prod_id_t;

class Product {
  public:
    Product(); // Default constructor
    Product(std::string aProdName, double aPrice); // Constructor
    // Getters
    prod_id_t getProdID();
    std::string getProdName();
    double getPrice();
    float getReviewRate();
    // Setters
    void setProdID(prod_id_t theID);
    void setProdName(std::string theName);
    void setPrice(double thePrice);
    void setReviewRate(float theRate);

    // Virtual function to be imlemented in product class
    virtual void displayProdInfo(); // displays common object info

    friend std::ostream& operator<< (std::ostream& os, Product&  aProduct); 

  private:
    int productID;
    std::string productName;
    double price;
    float reviewRate;

    static prod_id_t nextID; // static id variable
    static prod_id_t createNewID(); // creates another id

    // Pure virtual functions
    virtual std::string getProdTypeStr() = 0;
    virtual void displayContentsInfo() = 0;
};

#endif