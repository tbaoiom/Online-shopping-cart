#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include "product.hpp"
#include "cart.hpp"

class Cart;

class Customer {
  public:
    Customer();
    Customer(NameType theName, Cart* theCart);
    
    // Getters
    NameType getName();
    std::string getEmail();
    double getBalance();
    Cart* getCart();
    //Setters
    void setCart(Cart* aCart);
    void setEmail(std::string anEmailAddr);

    void updateBalance(double delta); // updates balance with a given value
    void displayCustomerReport(); // uses overloaded << from cart to display

  private:
    NameType name;
    std::string email;
    double balance;
    Cart* cart;
}; 

#endif

