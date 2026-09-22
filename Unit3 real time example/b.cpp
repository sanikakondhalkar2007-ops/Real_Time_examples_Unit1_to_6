#include <iostream> // Include the input-output stream library.

using namespace std; // Use the standard namespace.

class Complex // Create a class named Complex.
{ // Start the Complex class.

private: // Make the following data members private.
    float real; // Declare a float variable to store the real part.
    float imag; // Declare a float variable to store the imaginary part.

public: // Make the following members accessible outside the class.
    Complex(float r = 0, float i = 0) // Create a constructor with default values.
    { // Start the constructor body.
        real = r; // Store the real value.
        imag = i; // Store the imaginary value.
    } // End the constructor.

    Complex operator+(Complex c) // Overload the + operator for addition of complex numbers.
    { // Start the operator function.
        return Complex(real + c.real, imag + c.imag); // Return the sum of the two complex numbers.
    } // End the operator function.

    Complex operator-(Complex c) // Overload the - operator for subtraction.
    { // Start the operator function.
        return Complex(real - c.real, imag - c.imag); // Return the difference of the two complex numbers.
    } // End the operator function.

    Complex operator*(Complex c) // Overload the * operator for multiplication.
    { // Start the operator function.
        return Complex((real * c.real) - (imag * c.imag), (real * c.imag) + (imag * c.real)); // Calculate and return the product.
    } // End the operator function.

    bool operator==(Complex c) // Overload the == operator to compare two complex numbers.
    { // Start the comparison function.
        return real == c.real && imag == c.imag; // Return true when both real and imaginary parts are equal.
    } // End the comparison function.

    void display() // Create a function to display the complex number.
    { // Start the display function.
        cout << real << " + " << imag << "i" << endl; // Display the complex number in a + bi form.
    } // End the display function.
}; // End the Complex class.

int main() // Start the main function.
{ // Start the main function body.
    Complex c1(3, 4); // Create the first complex number 3 + 4i.
    Complex c2(2, 5); // Create the second complex number 2 + 5i.

    Complex sum = c1 + c2; // Add c1 and c2 using overloaded + operator.
    Complex difference = c1 - c2; // Subtract c2 from c1 using overloaded - operator.
    Complex product = c1 * c2; // Multiply c1 and c2 using overloaded * operator.

    cout << "COMPLEX NUMBER CALCULATOR" << endl; // Display the program heading.

    cout << "First Number: "; // Display a label for the first complex number.
    c1.display(); // Display the first complex number.

    cout << "Second Number: "; // Display a label for the second complex number.
    c2.display(); // Display the second complex number.

    cout << "Addition: "; // Display a label for the addition result.
    sum.display(); // Display the addition result.

    cout << "Subtraction: "; // Display a label for the subtraction result.
    difference.display(); // Display the subtraction result.

    cout << "Multiplication: "; // Display a label for the multiplication result.
    product.display(); // Display the multiplication result.

    if (c1 == c2) // Compare the two complex numbers using overloaded == operator.
    { // Start the if block.
        cout << "Both complex numbers are equal." << endl; // Display the equal message.
    } // End the if block.
    else // Execute when the complex numbers are not equal.
    { // Start the else block.
        cout << "Both complex numbers are different." << endl; // Display the different message.
    } // End the else block.

    return 0; // Return 0 for successful execution.
} // End the main function.