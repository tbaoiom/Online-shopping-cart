*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************
1. Includes product base class which has derived classes of
   audio products, video products, and book products. Book products
   has paper book and ebook derived classes.
2. Base product includes the ID, name, price, and review rating
   which all derived classes share. Pure virtual functions are
   defined in product class and book product class which all
   derived classes overload and define specifically for their
   product.
3. AudioProduct has its own genre type enumerated, videoProduct
   has its own film rate type enumerated, and gameProduct has
   its own enumerated console type. Switch case is used to
   get these into string data types.
5. Cart class creates an array of pointers to product objects.
   It has accessible member functions to add and remove objects
   from the cart. It also has a function to display each
   objects' information and display a final summary.
6. Customer class shares cart class and keeps a balance trackers
   as well as a display customer report function.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp

   Main program. This is the driver program that creates the products and adds
   them to the cart

Name:  product.hpp 

   Interface for product class. This is the base class for many of the derived
   classes. Provides virtual functions in which derived classes overload.
   Includes member variables in which all derived classes share and functions
   to display each product's info.
   
Name:  product.cpp 

   Implementation of getters, setters, and member functions for product class.

Name:  audioProduct.hpp 

  Interface for audio product class. This is a derived class of the product class.
  Overloads virtual functions from product class.
   
Name:  audioProduct.cpp 

  Implementation of getters, setters, and member functions for audioProduct class.

Name:  videoProduct.hpp 

  Interface for video product class. This is a derived class of the product class.
  Overloads virtual functions from product class.

Name:  videoProduct.cpp 

  Implementation of getters, setters, and member functions for videoProduct class.

Name:  bookProduct.hpp 

  Interface for audio product class. This is a derived class of the product class.
  Overloads virtual functions from product class. Includes its own virtual functions
  for its derived classes.

Name:  bookProduct.cpp

  Implementation of getters, setters, and member functions for bookProduct class.

Name:  ebookProduct.hpp

  Interface for ebookProduct, a derived class of bookProduct. Inherits bookProduct 
  attributes and is just a more specific type of bookProduct.
  
Name:  ebookProduct.cpp

  Implements displayProdStr() which returns the specific product.

Name:  paperProduct.hpp

  Interface for paperProduct, a derived class of bookProduct. Inherits bookProduct 
  attributes and is just a more specific type of bookProduct.

Name:  paperProduct.cpp

  Implements displayProdStr() which returns the specific product.

Name:  gameProduct.hpp

  Interface for gameProduct, this is a derived class of the product class.
  Overloads virtual functions from product class. Has specific member variables.

Name:  gameProduct.cpp

  Implementation of getters, setters, and member functions for gameProduct class.

Name:  customer.hpp

  Interface for customer product, which has a "is-a" relationship with cart class. Serves to add
  more functionality onto the cart class such as keeping a running balance total and 
  displaying the customer's report.

Name:  customer.cpp

  Implements the customer class and its member functions.

Name:  cart.hpp

  Interface for cart product which is a derived class of the product class. Serves as
  a collection of products which methods to act on the collections and display the
  information. Has a "is-a" relationship with customer class

Name:  cart.cpp

  Implements getters, setters, and functions of the cart class.
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 6.1.x  It was 
   compiled, run, and tested on gcc csegrid server.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the file.
   To uncompress it use the following commands 
       % unzip [file_Name]

   Now you should see a directory named homework with the files:
        main.cpp
        product.hpp
        product.cpp
        audioProduct.hpp
        audioProduct.cpp
        VideoProduct.hpp
        VideoProduct.cpp
        bookProduct.hpp
        bookProduct.cpp
        ebookProduct.hpp
        ebookProduct.cpp
        paperProduct.hpp
        paperProduct.cpp
        gameProduct.cpp
        gameProduct.hpp
        customer.cpp
        customer.hpp
        cart.hpp
        cart.cpp
        makefile
        readme.md
        output.txt

3. Build the program.

    Change to the directory that contains the file by:
    % cd [file_name] 

    Compile the program by:
    % make

4. Run the program by:
   % ./[main]

5. Delete the obj files, executables, and core dump by
   %./make clean
