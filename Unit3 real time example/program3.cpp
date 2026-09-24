#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library.

using namespace std; // Use the standard namespace.

class Validator // Create a class named Validator.
{ // Start the Validator class.

public: // Make the following functions accessible outside the class.

    bool validate(int marks) // Create a validate function for integer marks.
    { // Start the function.
        return marks >= 0 && marks <= 100; // Return true when marks are between 0 and 100.
    } // End the function.

    bool validate(float amount) // Create another validate function for float amount.
    { // Start the function.
        return amount > 0; // Return true when the amount is greater than zero.
    } // End the function.

    bool validate(string name) // Create another validate function for a string name.
    { // Start the function.
        return !name.empty(); // Return true when the name is not empty.
    } // End the function.
}; // End the Validator class.

int main() // Start the main function.
{ // Start the main function body.
    Validator validator; // Create an object of the Validator class.

    int marks = 85; // Create an integer variable and store 85 as marks.
    float amount = 5000.50; // Create a float variable and store the amount.
    string name = "Rahul"; // Create a string variable and store the name.

    cout << "INPUT VALIDATION SERVICE" << endl; // Display the program heading.
    cout << "------------------------" << endl; // Display a separator.

    if (validator.validate(marks)) // Call the validate function for marks and check the result.
    { // Start the if block.
        cout << "Marks are valid." << endl; // Display that marks are valid.
    } // End the if block.
    else // Execute when marks are invalid.
    { // Start the else block.
        cout << "Marks are invalid." << endl; // Display that marks are invalid.
    } // End the else block.

    if (validator.validate(amount)) // Call the overloaded validate function for amount.
    { // Start the if block.
        cout << "Amount is valid." << endl; // Display that the amount is valid.
    } // End the if block.
    else // Execute when amount is invalid.
    { // Start the else block.
        cout << "Amount is invalid." << endl; // Display that the amount is invalid.
    } // End the else block.

    if (validator.validate(name)) // Call the overloaded validate function for name.
    { // Start the if block.
        cout << "Name is valid." << endl; // Display that the name is valid.
    } // End the if block.
    else // Execute when the name is invalid.
    { // Start the else block.
        cout << "Name is invalid." << endl; // Display that the name is invalid.
    } // End the else block.

    return 0; // Return 0 for successful execution.
} // End the main function.