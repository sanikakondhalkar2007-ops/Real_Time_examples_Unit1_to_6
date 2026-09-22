#include <iostream> // Include the input-output stream library.
using namespace std; // Use the standard namespace.

template <class T> // Define a class template with generic type T.
class DynamicArray // Define a DynamicArray class.
{ // Start the class body.
private: // Start the private section.
    T* data; // Create a pointer to store the dynamic array.
    int size; // Store the current number of elements.
    int capacity; // Store the total available capacity.

public: // Start the public section.
    DynamicArray(int initialCapacity = 5) // Define a constructor with default capacity 5.
    { // Start the constructor body.
        capacity = initialCapacity; // Store the initial capacity.
        size = 0; // Initially the array contains zero elements.
        data = new T[capacity]; // Dynamically allocate memory for the array.
    } // End the constructor.

    void add(T value) // Define a function to add an element.
    { // Start the add function.
        if (size == capacity) // Check whether the array is full.
        { // Start the if block.
            capacity = capacity * 2; // Double the array capacity.
            T* newData = new T[capacity]; // Create a new larger array.

            for (int i = 0; i < size; i++) // Copy all existing elements.
            { // Start the loop.
                newData[i] = data[i]; // Copy the current element.
            } // End the loop.

            delete[] data; // Delete the old dynamic array.
            data = newData; // Make data point to the new array.
        } // End the if block.

        data[size] = value; // Store the new value at the next available position.
        size++; // Increase the number of elements.
    } // End the add function.

    void display() // Define a function to display all elements.
    { // Start the display function.
        cout << "Array elements: "; // Display the heading.

        for (int i = 0; i < size; i++) // Loop through all stored elements.
        { // Start the loop.
            cout << data[i] << " "; // Display the current element.
        } // End the loop.

        cout << endl; // Move the cursor to the next line.
        cout << "Size: " << size << endl; // Display the current number of elements.
        cout << "Capacity: " << capacity << endl; // Display the current capacity.
    } // End the display function.

    ~DynamicArray() // Define the destructor.
    { // Start the destructor body.
        delete[] data; // Release the dynamically allocated memory.
    } // End the destructor.
}; // End the DynamicArray class.

int main() // Start the main function.
{ // Start the main function body.
    DynamicArray<int> numbers; // Create a dynamic integer array.

    numbers.add(10); // Add 10 to the array.
    numbers.add(20); // Add 20 to the array.
    numbers.add(30); // Add 30 to the array.
    numbers.add(40); // Add 40 to the array.
    numbers.add(50); // Add 50 to the array.
    numbers.add(60); // Add 60 and increase capacity when required.

    numbers.display(); // Display the dynamic array details.

    DynamicArray<string> names; // Create a dynamic string array.

    names.add("Sanika"); // Add the first name.
    names.add("Rahul"); // Add the second name.
    names.add("Priya"); // Add the third name.

    names.display(); // Display the string array details.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.