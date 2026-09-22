#include <iostream> // Include the input-output stream library.
#include <vector> // Include the vector container library.
#include <map> // Include the map container library.
#include <string> // Include the string library.
#include <algorithm> // Include the STL algorithm library.
using namespace std; // Use the standard namespace.

class Product // Define a Product class.
{ // Start the class body.
private: // Start the private section.
    int id; // Store the product ID.
    string name; // Store the product name.
    double price; // Store the product price.

public: // Start the public section.
    Product(int productID, string productName, double productPrice) // Define a parameterized constructor.
    { // Start the constructor body.
        id = productID; // Assign the product ID.
        name = productName; // Assign the product name.
        price = productPrice; // Assign the product price.
    } // End the constructor.

    int getID() const // Define a function to return the product ID.
    { // Start the function body.
        return id; // Return the product ID.
    } // End the function.

    string getName() const // Define a function to return the product name.
    { // Start the function body.
        return name; // Return the product name.
    } // End the function.

    double getPrice() const // Define a function to return the product price.
    { // Start the function body.
        return price; // Return the product price.
    } // End the function.
}; // End the Product class.

int main() // Start the main function.
{ // Start the main function body.
    vector<Product> products; // Create a vector to store products.

    products.push_back(Product(101, "Laptop", 50000)); // Add a laptop to the product list.
    products.push_back(Product(102, "Mouse", 800)); // Add a mouse to the product list.
    products.push_back(Product(103, "Keyboard", 1500)); // Add a keyboard to the product list.
    products.push_back(Product(104, "Headphones", 2000)); // Add headphones to the product list.

    map<int, int> cart; // Create a map storing product ID and quantity.

    cart[101] = 1; // Add one laptop to the shopping cart.
    cart[102] = 2; // Add two mice to the shopping cart.
    cart[104] = 1; // Add one headphone to the shopping cart.

    double total = 0; // Initialize the total shopping amount to zero.

    cout << "--- E-Commerce Shopping Cart ---" << endl; // Display the shopping cart heading.

    for (map<int, int>::iterator cartItem = cart.begin(); cartItem != cart.end(); ++cartItem) // Traverse all cart items.
    { // Start the cart loop.
        for (int i = 0; i < products.size(); i++) // Search for the product in the product vector.
        { // Start the product search loop.
            if (products[i].getID() == cartItem->first) // Check whether the product ID matches.
            { // Start the if block.
                double itemTotal = products[i].getPrice() * cartItem->second; // Calculate the total price for this product.
                total = total + itemTotal; // Add the item total to the cart total.

                cout << "Product: " << products[i].getName() << endl; // Display the product name.
                cout << "Quantity: " << cartItem->second << endl; // Display the quantity.
                cout << "Price: " << products[i].getPrice() << endl; // Display the price of one product.
                cout << "Item Total: " << itemTotal << endl; // Display the total price for this item.
                cout << "----------------------" << endl; // Display a separator.
            } // End the if block.
        } // End the product search loop.
    } // End the cart loop.

    cout << "Final Cart Total: " << total << endl; // Display the final shopping cart total.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.