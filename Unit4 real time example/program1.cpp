#include <iostream> // Include the input-output stream library.
#include <fstream> // Include the file handling library.
#include <string> // Include the string library.
using namespace std; // Use the standard namespace.

class Student // Define a Student class.
{ // Start the class body.
private: // Start the private section.
    int rollNo; // Store the student's roll number.
    string name; // Store the student's name.
    float marks; // Store the student's marks.

public: // Start the public section.
    Student(int r, string n, float m) // Define a parameterized constructor.
    { // Start the constructor body.
        rollNo = r; // Assign the roll number.
        name = n; // Assign the student's name.
        marks = m; // Assign the student's marks.
    } // End the constructor.

    void display() // Define a function to display student details.
    { // Start the display function.
        cout << "Roll No: " << rollNo << endl; // Display the roll number.
        cout << "Name: " << name << endl; // Display the student's name.
        cout << "Marks: " << marks << endl; // Display the student's marks.
    } // End the display function.
}; // End the Student class.

void addRecord() // Define a function to add a student record.
{ // Start the function.
    int rollNo; // Declare a variable for roll number.
    string name; // Declare a variable for student name.
    float marks; // Declare a variable for marks.

    cout << "Enter Roll No: "; // Ask the user for roll number.
    cin >> rollNo; // Read the roll number.
    cin.ignore(); // Remove the newline left in the input buffer.

    cout << "Enter Name: "; // Ask the user for name.
    getline(cin, name); // Read the complete name.

    cout << "Enter Marks: "; // Ask the user for marks.
    cin >> marks; // Read the marks.

    ofstream file("students.txt", ios::app); // Open the file in append mode.
    file << rollNo << "|" << name << "|" << marks << endl; // Write the student record into the file.
    file.close(); // Close the file.

    cout << "Record added successfully." << endl; // Display success message.
} // End the addRecord function.

void displayRecords() // Define a function to display all records.
{ // Start the function.
    ifstream file("students.txt"); // Open the student file for reading.
    string line; // Declare a variable to store each line.

    cout << "\n--- Student Records ---" << endl; // Display the heading.

    while (getline(file, line)) // Read the file one line at a time.
    { // Start the while loop.
        cout << line << endl; // Display the current record.
    } // End the while loop.

    file.close(); // Close the file.
} // End the displayRecords function.

int main() // Start the main function.
{ // Start the main function body.
    addRecord(); // Call the function to add a student record.
    addRecord(); // Call the function again to add another record.
    displayRecords(); // Display all student records.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.