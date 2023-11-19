#include "product.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Static variable
prod_id_t Product::nextID = 1;

// Constructor
Product::Product(string aProdName, double aPrice) {
  if (aProdName == "") {
    productName = "!None!";
  }
  else {productName = aProdName;}

  if ((aPrice > 0) && (aPrice < 100.0)) {
    price = aPrice;
  }
  else {price = 0.0;}

  // Set the ID and create a new one
  productID = nextID;
  createNewID();
}

// Getters for variables
prod_id_t Product::getProdID (){
  return productID;
}
string Product::getProdName (){
  return productName;
}
double Product::getPrice (){
  return price;
}
float Product::getReviewRate (){
  return reviewRate;
}

// Setters for variables
void Product::setProdID (prod_id_t theID){
  productID = theID;
}
void Product::setProdName (string theName){
  productName = theName;
}
void Product::setPrice (double thePrice){
  price = thePrice;
}
void Product::setReviewRate (float theRate){
  reviewRate = theRate;
}

// Creates new IDs for each object
prod_id_t Product::createNewID (){
  return nextID++;
}

// Display the common attributes
void Product::displayProdInfo (){
  cout << "[" << getProdTypeStr() << "]" << endl;
  cout << "Product ID: " << productID << endl;
  cout << "Product Name: " << productName << endl;
  cout << "Price: $" << price << endl;
  cout << "Product Review Rate: " << reviewRate << endl;
  displayContentsInfo();
  cout << " " << endl;
}

std::ostream& operator<< (std::ostream& os, Product&  aProduct){
  aProduct.displayProdInfo();
  return os;
}