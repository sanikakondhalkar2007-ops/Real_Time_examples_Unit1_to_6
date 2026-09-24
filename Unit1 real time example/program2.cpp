#include <iostream>// Include the input-output stream library.
#include <string> // Include the string library to store student names.
#include <vector> // Include the vector library to store multiple Student objects.

using namespace std; // Use the standard namespace.

class Student // Create a class named Student.
{ // Start the Student class.

private: // Make the following data members private.
    int rollNumber; // Declare an integer variable to store the student's roll number.
    string name; // Declare a string variable to store the student's name.
    int totalClasses; // Declare an integer variable to store the total number of classes.
    int attendedClasses; // Declare an integer variable to store the number of attended classes.

public: // Make the following members accessible outside the class.
    Student(int roll, string studentName, int total, int attended) // Create a parameterized constructor.
    { // Start the constructor body.
        rollNumber = roll; // Store the roll number in rollNumber.
        name = studentName; // Store the student's name in name.
        totalClasses = total; // Store the total classes in totalClasses.
        attendedClasses = attended; // Store attended classes in attendedClasses.
    } // End the constructor.

    float getAttendance() // Create a function to calculate attendance percentage.
    { // Start the getAttendance function.
        return (attendedClasses * 100.0) / totalClasses; // Calculate and return the attendance percentage.
    } // End the getAttendance function.

    void display() // Create a function to display student details.
    { // Start the display function.
        cout << "Roll Number: " << rollNumber << endl; // Display the student's roll number.
        cout << "Name: " << name << endl; // Display the student's name.
        cout << "Attendance: " << getAttendance() << "%" << endl; // Calculate and display the attendance percentage.

        if (getAttendance() < 75) // Check whether the attendance is less than 75 percent.
        { // Start the if block.
            cout << "Status: Attendance Defaulter" << endl; // Display that the student is a defaulter.
        } // End the if block.
        else // Execute this block when attendance is 75 percent or more.
        { // Start the else block.
            cout << "Status: Eligible" << endl; // Display that the student is eligible.
        } // End the else block.

        cout << "------------------------" << endl; // Display a separator line.
    } // End the display function.
}; // End the Student class.

int main() // Start the main function.
{ // Start the main function body.
    vector<Student> students; // Create a vector to store Student objects.

    students.push_back(Student(1, "Rahul", 100, 85)); // Create and add the first student.
    students.push_back(Student(2, "Priya", 100, 70)); // Create and add the second student.
    students.push_back(Student(3, "Amit", 100, 92)); // Create and add the third student.

    cout << "STUDENT ATTENDANCE MANAGEMENT SYSTEM" << endl; // Display the program heading.

    for (int i = 0; i < students.size(); i++) // Repeat the loop for every student.
    { // Start the for loop.
        students[i].display(); // Call the display function of the current student.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.