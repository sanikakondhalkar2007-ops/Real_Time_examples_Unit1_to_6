#include <iostream> // Include the input-output stream library.
using namespace std; // Use the standard namespace.

template <class T> // Define a class template parameter T.
void sortArray(T arr[], int size) // Define a generic sorting function.
{ // Start the function body.
    for (int i = 0; i < size - 1; i++) // Repeat the sorting process for each position.
    { // Start the outer loop.
        for (int j = 0; j < size - i - 1; j++) // Compare adjacent elements.
        { // Start the inner loop.
            if (arr[j] > arr[j + 1]) // Check whether the current element is greater than the next element.
            { // Start the if block.
                T temp = arr[j]; // Store the current element temporarily.
                arr[j] = arr[j + 1]; // Move the smaller element to the current position.
                arr[j + 1] = temp; // Move the larger element to the next position.
            } // End the if block.
        } // End the inner loop.
    } // End the outer loop.
} // End the sortArray function.

template <class T> // Define a class template parameter T.
void displayArray(T arr[], int size) // Define a generic display function.
{ // Start the function body.
    for (int i = 0; i < size; i++) // Loop through all array elements.
    { // Start the loop.
        cout << arr[i] << " "; // Display the current array element.
    } // End the loop.
    cout << endl; // Move the cursor to the next line.
} // End the displayArray function.

int main() // Start the main function.
{ // Start the main function body.
    int numbers[] = {50, 20, 40, 10, 30}; // Create an integer array.
    int size = 5; // Store the number of elements.

    cout << "Before sorting: "; // Display the heading.
    displayArray(numbers, size); // Display the unsorted integer array.

    sortArray(numbers, size); // Sort the integer array using the template function.

    cout << "After sorting: "; // Display the heading.
    displayArray(numbers, size); // Display the sorted integer array.

    double values[] = {4.5, 1.2, 3.8, 2.1}; // Create a double array.
    int doubleSize = 4; // Store the number of double elements.

    cout << "Double array before sorting: "; // Display the heading.
    displayArray(values, doubleSize); // Display the unsorted double array.

    sortArray(values, doubleSize); // Sort the double array using the same template.

    cout << "Double array after sorting: "; // Display the heading.
    displayArray(values, doubleSize); // Display the sorted double array.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.