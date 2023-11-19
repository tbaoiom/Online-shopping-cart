#include "cart.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using std::cout;
using std::endl;

// Constructor
Cart::Cart (){
}

// Getters
NameType Cart::getOwner (){
  return owner;
}
int Cart::getItemNum (){
  return itemNum;
}
Customer* Cart::getCustomer (){
  return customer;
}

// Setters
void Cart::setOwner (NameType anOwner){
  owner = anOwner;
}
void Cart::setItemNum (int anItemNum){
  itemNum = anItemNum;
}
void Cart::setCustomer (Customer *aCustomer){
  customer = aCustomer;
}

// Checks if cart is full
bool Cart::isCartFull (){
  return (itemNum == MAX_ITEMS);
}

// returns true if item is successfully added, false if not
bool Cart::addItem (Product *theProduct) {
  try {
    // throw exception message if cart is full
    if (isCartFull()) {
      throw CartOverflowException("Cart Overflow for " + theProduct->getProdName() + "(ID: " + std::to_string(theProduct->getProdID()) + ")");
    }
    else {
      purchasedItems.push_back(theProduct);
      customer->updateBalance(theProduct->getPrice()); // update balance
      itemNum++; // add 1 to item count
      return true;
    } // catch exception
  } catch (CartOverflowException e){
    std::cerr << e.what() << std::endl;
    return false;
  }
}

// returns true item is found in cart and removed, otherwise return false
bool Cart::removeItem(prod_id_t theProductID){
  for (int i=0; i<purchasedItems.size(); i++) {
    if (theProductID == purchasedItems[i]->getProdID()) {
      purchasedItems.erase(purchasedItems.begin()+i); // remove specified product
      itemNum--; // remove 1 from item count
      customer->updateBalance(-(purchasedItems[i]->getPrice())); // update balance
      return true;
    }
  }
  return false;
}   
// display the contents of each object and then the cart summary info
void Cart::displayCart(){
  cout << "" << endl;
  cout << "[Product Details]" << endl;
  cout << "" << endl;
  
  for (int i=0; i<purchasedItems.size(); i++) {
    purchasedItems[i]->displayProdInfo();
  }
  cout << "[Summary of Purchase for " 
       << customer->getName().firstName << "'s Cart]" << endl;
  cout << "Total number of purchases: " << purchasedItems.size() << endl;
  cout << "Total cost: $" << customer->getBalance() << endl;
  cout << "Average cost: $" << customer->getBalance() / purchasedItems.size() << endl;
}

// overloads + to add items to the cart
Cart& Cart::operator+ (Product* theProduct){
  addItem(theProduct);
  return *this;
}

// overloads << operator to display the objects in the cart
std::ostream& operator<< (std::ostream& os, Cart& aCart){
  aCart.displayCart();
  return os;
}

// exception error
CartOverflowException::CartOverflowException(const std::string& message)
  : std::logic_error("CartOverflowException: " + message){
}