  #include "customer.hpp"
#include <string>
#include <iostream>

using std::string;

// constructor, sets the customer using the cart
Customer::Customer(NameType theName, Cart* theCart) : name(theName), cart(theCart), balance(0.0) {
  name = theName;
  cart = theCart;
  cart->setCustomer(this);
  balance = 0;
}

// Getters
NameType Customer::getName (){
  return name;
}
string Customer::getEmail (){
  return email;
}
double Customer::getBalance (){
  return balance;
}
Cart* Customer::getCart (){
  return cart;
}
//Setters
void Customer::setCart (Cart *aCart){
  cart = aCart;
}
void Customer::setEmail (string anEmailAddr){
  email = anEmailAddr;
}

// display object using overloaded << from cart
void Customer::displayCustomerReport(){
  std::cout << *cart << std::endl;
}
void Customer::updateBalance(double delta){
  balance += delta;
}