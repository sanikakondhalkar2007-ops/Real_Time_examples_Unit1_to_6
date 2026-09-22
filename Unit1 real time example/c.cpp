#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library to store product names.

using namespace std; // Use the standard namespace.

class Product // Create a class named Product.
{ // Start the Product class.

private: // Make the following data members private.
    int productID; // Declare an integer variable to store the product ID.
    string productName; // Declare a string variable to store the product name.
    float price; // Declare a float variable to store the product price.
    static int productCount; // Declare a static variable to count the number of products.

public: // Make the following members accessible outside the class.
    Product(int id, string name, float productPrice) // Create a parameterized constructor.
    { // Start the constructor body.
        productID = id; // Store the product ID.
        productName = name; // Store the product name.
        price = productPrice; // Store the product price.
        productCount++; // Increase the product count by one.
    } // End the constructor.

    inline int getProductID() // Create an inline function to return the product ID.
    { // Start the function body.
        return productID; // Return the product ID.
    } // End the function.

    inline string getProductName() // Create an inline function to return the product name.
    { // Start the function body.
        return productName; // Return the product name.
    } // End the function.

    inline float getPrice() // Create an inline function to return the product price.
    { // Start the function body.
        return price; // Return the product price.
    } // End the function.

    void display() // Create a function to display product details.
    { // Start the display function.
        cout << "Product ID: " << productID << endl; // Display the product ID.
        cout << "Product Name: " << productName << endl; // Display the product name.
        cout << "Price: Rs. " << price << endl; // Display the product price.
        cout << "------------------------" << endl; // Display a separator line.
    } // End the display function.

    static void displayProductCount() // Create a static function to display the total number of products.
    { // Start the static function.
        cout << "Total Products: " << productCount << endl; // Display the total product count.
    } // End the static function.

    ~Product() // Create a destructor for the Product class.
    { // Start the destructor body.
        cout << "Product object destroyed." << endl; // Display a message when the object is destroyed.
    } // End the destructor.
}; // End the Product class.

int Product::productCount = 0; // Initialize the static productCount variable with zero.

int main() // Start the main function.
{ // Start the main function body.
    cout << "E-COMMERCE PRODUCT CATALOG" << endl; // Display the program heading.

    Product p1(101, "Laptop", 55000); // Create the first Product object.
    Product p2(102, "Mobile Phone", 25000); // Create the second Product object.
    Product p3(103, "Headphones", 2000); // Create the third Product object.

    p1.display(); // Display the details of the first product.
    p2.display(); // Display the details of the second product.
    p3.display(); // Display the details of the third product.

    Product::displayProductCount(); // Call the static function using the class name.

    return 0; // Return 0 for successful execution.
} // End the main function.