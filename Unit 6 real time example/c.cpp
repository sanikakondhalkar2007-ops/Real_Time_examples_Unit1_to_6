#include <iostream> // Include the input-output stream library.
#include <vector> // Include the vector container library.
#include <map> // Include the map container library.
#include <string> // Include the string library.
using namespace std; // Use the standard namespace.

int main() // Start the main function.
{ // Start the main function body.
    map<string, vector<int> > studentGrades; // Create a map storing student names and their marks.

    studentGrades["Sanika"].push_back(85); // Add the first mark for Sanika.
    studentGrades["Sanika"].push_back(90); // Add the second mark for Sanika.
    studentGrades["Sanika"].push_back(88); // Add the third mark for Sanika.

    studentGrades["Rahul"].push_back(78); // Add the first mark for Rahul.
    studentGrades["Rahul"].push_back(82); // Add the second mark for Rahul.
    studentGrades["Rahul"].push_back(80); // Add the third mark for Rahul.

    studentGrades["Priya"].push_back(92); // Add the first mark for Priya.
    studentGrades["Priya"].push_back(89); // Add the second mark for Priya.
    studentGrades["Priya"].push_back(95); // Add the third mark for Priya.

    map<string, vector<int> >::iterator it; // Declare an iterator for the student map.

    for (it = studentGrades.begin(); it != studentGrades.end(); ++it) // Traverse all students.
    { // Start the loop.
        int total = 0; // Initialize the total marks to zero.

        for (int i = 0; i < it->second.size(); i++) // Traverse the marks of the current student.
        { // Start the inner loop.
            total = total + it->second[i]; // Add the current mark to the total.
        } // End the inner loop.

        double average = (double)total / it->second.size(); // Calculate the average marks.

        cout << "Student: " << it->first << endl; // Display the student name.
        cout << "Average Marks: " << average << endl; // Display the student's average marks.
        cout << "----------------------" << endl; // Display a separator.
    } // End the outer loop.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.