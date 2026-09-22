#include <iostream> // Include the input-output stream library.
#include <map> // Include the map container library.
#include <string> // Include the string library.
using namespace std; // Use the standard namespace.

int main() // Start the main function.
{ // Start the main function body.
    map<int, pair<string, double> > employees; // Create a map storing employee ID, name, and salary.

    employees[101] = make_pair("Sanika", 45000); // Add employee 101 with name and salary.
    employees[102] = make_pair("Rahul", 50000); // Add employee 102 with name and salary.
    employees[103] = make_pair("Priya", 55000); // Add employee 103 with name and salary.

    int searchID; // Declare a variable to store the employee ID to search.

    cout << "Enter Employee ID: "; // Ask the user to enter an employee ID.
    cin >> searchID; // Read the employee ID.

    map<int, pair<string, double> >::iterator it = employees.find(searchID); // Search for the employee ID in the map.

    if (it != employees.end()) // Check whether the employee was found.
    { // Start the if block.
        cout << "Employee ID: " << it->first << endl; // Display the employee ID.
        cout << "Name: " << it->second.first << endl; // Display the employee name.
        cout << "Salary: " << it->second.second << endl; // Display the employee salary.
    } // End the if block.
    else // Execute this block when the employee is not found.
    { // Start the else block.
        cout << "Employee not found." << endl; // Display the not-found message.
    } // End the else block.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.