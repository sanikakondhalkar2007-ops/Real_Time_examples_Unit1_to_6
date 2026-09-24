#include <iostream> // Include the input-output stream library.
#include <fstream> // Include the file handling library.
#include <cstring> // Include the string manipulation library.
using namespace std; // Use the standard namespace.

struct StudentRecord // Define a structure for a fixed-size student record.
{ // Start the structure body.
    int rollNo; // Store the student's roll number.
    char name[30]; // Store the student's name using a fixed-size character array.
    float marks; // Store the student's marks.
}; // End the structure.

int main() // Start the main function.
{ // Start the main function body.
    StudentRecord student; // Create a StudentRecord object.

    student.rollNo = 101; // Assign the roll number.
    strcpy(student.name, "Sanika"); // Copy the student's name into the character array.
    student.marks = 89.5; // Assign the student's marks.

    ofstream outFile("student.dat", ios::binary); // Open a binary file for writing.

    outFile.write(reinterpret_cast<char*>(&student), sizeof(student)); // Write the complete record into the binary file.

    outFile.close(); // Close the binary file.

    StudentRecord readStudent; // Create another object to read the stored record.

    ifstream inFile("student.dat", ios::binary); // Open the binary file for reading.

    inFile.read(reinterpret_cast<char*>(&readStudent), sizeof(readStudent)); // Read the complete record from the binary file.

    inFile.close(); // Close the binary file.

    cout << "--- Student Record ---" << endl; // Display the heading.
    cout << "Roll No: " << readStudent.rollNo << endl; // Display the roll number.
    cout << "Name: " << readStudent.name << endl; // Display the student's name.
    cout << "Marks: " << readStudent.marks << endl; // Display the student's marks.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.