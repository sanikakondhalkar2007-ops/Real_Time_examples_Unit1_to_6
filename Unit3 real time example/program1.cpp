#include <iostream> // Include the input-output stream library.
#include <cmath> // Include the mathematical library for calculations.

using namespace std; // Use the standard namespace.

class Shape // Create an abstract base class named Shape.
{ // Start the Shape class.

public: // Make the following members accessible from outside the class.
    virtual void draw() = 0; // Declare a pure virtual function named draw().
    virtual float area() = 0; // Declare a pure virtual function named area().
    virtual ~Shape() {} // Create a virtual destructor for the base class.
}; // End the Shape class.

class Circle : public Shape // Create Circle as a derived class of Shape.
{ // Start the Circle class.

private: // Make the following data member private.
    float radius; // Declare a float variable to store the radius.

public: // Make the following members accessible outside the class.
    Circle(float r) // Create a parameterized constructor for Circle.
    { // Start the constructor body.
        radius = r; // Store the radius in the radius variable.
    } // End the constructor.

    void draw() // Override the draw function of the Shape class.
    { // Start the draw function.
        cout << "Drawing a Circle." << endl; // Display a message that a circle is being drawn.
    } // End the draw function.

    float area() // Override the area function of the Shape class.
    { // Start the area function.
        return 3.14159 * radius * radius; // Calculate and return the area of the circle.
    } // End the area function.
}; // End the Circle class.

class Rectangle : public Shape // Create Rectangle as a derived class of Shape.
{ // Start the Rectangle class.

private: // Make the following data members private.
    float length; // Declare a float variable to store the length.
    float width; // Declare a float variable to store the width.

public: // Make the following members accessible outside the class.
    Rectangle(float l, float w) // Create a parameterized constructor.
    { // Start the constructor body.
        length = l; // Store the length.
        width = w; // Store the width.
    } // End the constructor.

    void draw() // Override the draw function.
    { // Start the draw function.
        cout << "Drawing a Rectangle." << endl; // Display a message that a rectangle is being drawn.
    } // End the draw function.

    float area() // Override the area function.
    { // Start the area function.
        return length * width; // Calculate and return the area of the rectangle.
    } // End the area function.
}; // End the Rectangle class.

class Triangle : public Shape // Create Triangle as a derived class of Shape.
{ // Start the Triangle class.

private: // Make the following data members private.
    float base; // Declare a float variable to store the base.
    float height; // Declare a float variable to store the height.

public: // Make the following members accessible outside the class.
    Triangle(float b, float h) // Create a parameterized constructor.
    { // Start the constructor body.
        base = b; // Store the base value.
        height = h; // Store the height value.
    } // End the constructor.

    void draw() // Override the draw function.
    { // Start the draw function.
        cout << "Drawing a Triangle." << endl; // Display a message that a triangle is being drawn.
    } // End the draw function.

    float area() // Override the area function.
    { // Start the area function.
        return 0.5 * base * height; // Calculate and return the area of the triangle.
    } // End the area function.
}; // End the Triangle class.

int main() // Start the main function.
{ // Start the main function body.
    Circle circle(5); // Create a Circle object with radius 5.
    Rectangle rectangle(10, 5); // Create a Rectangle object with length 10 and width 5.
    Triangle triangle(8, 6); // Create a Triangle object with base 8 and height 6.

    Shape* shapes[3]; // Create an array of three Shape pointers.

    shapes[0] = &circle; // Store the address of the Circle object.
    shapes[1] = &rectangle; // Store the address of the Rectangle object.
    shapes[2] = &triangle; // Store the address of the Triangle object.

    cout << "CAD SHAPE DRAWING SYSTEM" << endl; // Display the program heading.
    cout << "------------------------" << endl; // Display a separator.

    for (int i = 0; i < 3; i++) // Repeat the loop for all three shapes.
    { // Start the for loop.
        shapes[i]->draw(); // Call the appropriate draw function using runtime polymorphism.
        cout << "Area: " << shapes[i]->area() << endl; // Call the appropriate area function and display the result.
        cout << "------------------------" << endl; // Display a separator.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.