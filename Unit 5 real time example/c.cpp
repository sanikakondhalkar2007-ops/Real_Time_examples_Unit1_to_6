#include <iostream> // Include the input-output stream library.
using namespace std; // Use the standard namespace.

template <class T> // Define a class template with generic type T.
class Stack // Define a Stack class.
{ // Start the class body.
private: // Start the private section.
    T items[5]; // Create an array to store stack elements.
    int top; // Store the position of the top element.

public: // Start the public section.
    Stack() // Define the default constructor.
    { // Start the constructor body.
        top = -1; // Set top to -1 because the stack is initially empty.
    } // End the constructor.

    void push(T value) // Define a generic push function.
    { // Start the push function.
        if (top == 4) // Check whether the stack is full.
        { // Start the if block.
            cout << "Stack Overflow." << endl; // Display the stack-full message.
            return; // Stop the function.
        } // End the if block.

        top++; // Move the top position upward.
        items[top] = value; // Store the new value at the top.
        cout << value << " pushed into stack." << endl; // Display the pushed value.
    } // End the push function.

    void pop() // Define a function to remove the top element.
    { // Start the pop function.
        if (top == -1) // Check whether the stack is empty.
        { // Start the if block.
            cout << "Stack Underflow." << endl; // Display the stack-empty message.
            return; // Stop the function.
        } // End the if block.

        cout << items[top] << " popped from stack." << endl; // Display the element being removed.
        top--; // Move the top position downward.
    } // End the pop function.

    void display() // Define a function to display stack elements.
    { // Start the display function.
        if (top == -1) // Check whether the stack is empty.
        { // Start the if block.
            cout << "Stack is empty." << endl; // Display the empty-stack message.
            return; // Stop the function.
        } // End the if block.

        cout << "Stack elements: "; // Display the heading.
        for (int i = top; i >= 0; i--) // Traverse the stack from top to bottom.
        { // Start the loop.
            cout << items[i] << " "; // Display the current stack element.
        } // End the loop.
        cout << endl; // Move the cursor to the next line.
    } // End the display function.
}; // End the Stack class.

int main() // Start the main function.
{ // Start the main function body.
    Stack<int> integerStack; // Create an integer stack using the template.

    integerStack.push(10); // Push 10 into the integer stack.
    integerStack.push(20); // Push 20 into the integer stack.
    integerStack.push(30); // Push 30 into the integer stack.
    integerStack.display(); // Display the integer stack.
    integerStack.pop(); // Remove the top element.
    integerStack.display(); // Display the updated stack.

    Stack<string> stringStack; // Create a string stack using the same template.

    stringStack.push("C++"); // Push C++ into the string stack.
    stringStack.push("Python"); // Push Python into the string stack.
    stringStack.display(); // Display the string stack.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.