#include <iostream> // Include the input-output stream library.
#include <fstream> // Include the file handling library.
#include <string> // Include the string library.
#include <vector> // Include the vector library.
using namespace std; // Use the standard namespace.

class Book // Define a Book class.
{ // Start the class body.
private: // Start the private section.
    int bookID; // Store the book ID.
    string title; // Store the book title.
    string author; // Store the author's name.
    bool available; // Store whether the book is available.

public: // Start the public section.
    Book(int id, string t, string a, bool status = true) // Define a parameterized constructor.
    { // Start the constructor body.
        bookID = id; // Assign the book ID.
        title = t; // Assign the book title.
        author = a; // Assign the author's name.
        available = status; // Assign the availability status.
    } // End the constructor.

    int getID() // Define a function to return the book ID.
    { // Start the function.
        return bookID; // Return the book ID.
    } // End the function.

    void display() // Define a function to display book details.
    { // Start the display function.
        cout << "Book ID: " << bookID << endl; // Display the book ID.
        cout << "Title: " << title << endl; // Display the book title.
        cout << "Author: " << author << endl; // Display the author's name.
        cout << "Status: " << (available ? "Available" : "Issued") << endl; // Display whether the book is available or issued.
    } // End the display function.

    void issueBook() // Define a function to issue a book.
    { // Start the issueBook function.
        if (available) // Check whether the book is available.
        { // Start the if block.
            available = false; // Change the book status to issued.
            cout << "Book issued successfully." << endl; // Display the success message.
        } // End the if block.
        else // Execute this block if the book is already issued.
        { // Start the else block.
            cout << "Book is already issued." << endl; // Display the message.
        } // End the else block.
    } // End the issueBook function.

    void returnBook() // Define a function to return a book.
    { // Start the returnBook function.
        if (!available) // Check whether the book is currently issued.
        { // Start the if block.
            available = true; // Change the book status to available.
            cout << "Book returned successfully." << endl; // Display the success message.
        } // End the if block.
        else // Execute this block if the book is already available.
        { // Start the else block.
            cout << "Book is already available." << endl; // Display the message.
        } // End the else block.
    } // End the returnBook function.
}; // End the Book class.

int main() // Start the main function.
{ // Start the main function body.
    vector<Book> library; // Create a vector to store library books.

    library.push_back(Book(101, "C++ Programming", "Bjarne Stroustrup")); // Add the first book.
    library.push_back(Book(102, "Data Structures", "Mark Allen Weiss")); // Add the second book.
    library.push_back(Book(103, "Python Programming", "John Zelle")); // Add the third book.

    cout << "--- Library Books ---" << endl; // Display the heading.

    for (int i = 0; i < library.size(); i++) // Loop through all books.
    { // Start the for loop.
        library[i].display(); // Display the current book.
        cout << "-------------------" << endl; // Display a separator.
    } // End the for loop.

    cout << "\nIssuing Book ID 102..." << endl; // Display the issue operation.
    library[1].issueBook(); // Issue the second book.

    cout << "\nUpdated Book Details:" << endl; // Display the updated details heading.
    library[1].display(); // Display the updated book information.

    cout << "\nReturning Book ID 102..." << endl; // Display the return operation.
    library[1].returnBook(); // Return the second book.

    cout << "\nFinal Book Details:" << endl; // Display the final details heading.
    library[1].display(); // Display the final book information.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.