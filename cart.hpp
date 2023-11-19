#ifndef CART_HPP
#define CART_HPP

#include <string>
#include <vector>
#include <stdexcept>
#include "product.hpp"
#include "customer.hpp"

class Customer;

class Cart {
  public:
    Cart(); // Constructor

    bool addItem(Product *theProduct); // returns true if the specified item is successfully added, false if full
    bool removeItem(prod_id_t theProductID); // returns true if item is removed, false if not found or cart is empty
    void displayCart(); // display the contents of objects and cart summary info. 
    
    // Getters
    NameType getOwner();
    int getItemNum();
    Customer* getCustomer();

    // Setters
    void setOwner(NameType anOwner);
    void setItemNum(int anItemNum);
    void setCustomer(Customer *aCustomer);

    // overloaders
    Cart& operator+ (Product* theProduct);
    friend std::ostream& operator<< (std::ostream& os, Cart&  aCart);

  private:
    static const int MAX_ITEMS = 7;
    std::vector<Product*> purchasedItems; // container of object pointers
    int itemNum = 0;
    NameType owner;
    Customer *customer; // Pointer to customer object

    bool isCartFull(); // check if cart is full
};

class CartOverflowException : public std::logic_error {
  public:
    CartOverflowException(const std::string& message = "");
};

#endif