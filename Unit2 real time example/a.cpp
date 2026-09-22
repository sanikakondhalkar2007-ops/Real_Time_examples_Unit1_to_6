#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library for storing employee names.
#include <vector> // Include the vector library for storing multiple employee objects.

using namespace std; // Use the standard namespace.

class Employee // Create a base class named Employee.
{ // Start the Employee class.

protected: // Make the following members accessible inside this class and its derived classes.
    int id; // Declare an integer variable to store the employee ID.
    string name; // Declare a string variable to store the employee name.

public: // Make the following members accessible from outside the class.
    Employee(int employeeID, string employeeName) // Create a parameterized constructor for Employee.
    { // Start the constructor body.
        id = employeeID; // Store the employee ID in id.
        name = employeeName; // Store the employee name in name.
    } // End the constructor.

    virtual float calculateSalary() // Create a virtual function to calculate salary.
    { // Start the calculateSalary function.
        return 0; // Return zero as the default salary.
    } // End the function.

    virtual void display() // Create a virtual function to display employee details.
    { // Start the display function.
        cout << "Employee ID: " << id << endl; // Display the employee ID.
        cout << "Employee Name: " << name << endl; // Display the employee name.
    } // End the display function.

    virtual ~Employee() // Create a virtual destructor for the base class.
    { // Start the destructor body.
    } // End the destructor.
}; // End the Employee class.

class FullTimeEmployee : public Employee // Create FullTimeEmployee derived publicly from Employee.
{ // Start the FullTimeEmployee class.

private: // Make the following member private.
    float monthlySalary; // Declare a float variable to store monthly salary.

public: // Make the following members accessible from outside the class.
    FullTimeEmployee(int id, string name, float salary) // Create a parameterized constructor.
        : Employee(id, name) // Call the base class constructor.
    { // Start the constructor body.
        monthlySalary = salary; // Store the monthly salary.
    } // End the constructor.

    float calculateSalary() // Override the base class salary function.
    { // Start the calculateSalary function.
        return monthlySalary; // Return the monthly salary.
    } // End the function.

    void display() // Override the display function.
    { // Start the display function.
        Employee::display(); // Call the display function of the base class.
        cout << "Salary: Rs. " << calculateSalary() << endl; // Display the full-time employee salary.
    } // End the display function.
}; // End the FullTimeEmployee class.

class PartTimeEmployee : public Employee // Create PartTimeEmployee derived from Employee.
{ // Start the PartTimeEmployee class.

private: // Make the following members private.
    int hours; // Store the number of working hours.
    float rate; // Store the payment rate per hour.

public: // Make the following members accessible from outside the class.
    PartTimeEmployee(int id, string name, int workingHours, float hourlyRate) // Create a parameterized constructor.
        : Employee(id, name) // Call the base class constructor.
    { // Start the constructor body.
        hours = workingHours; // Store the working hours.
        rate = hourlyRate; // Store the hourly rate.
    } // End the constructor.

    float calculateSalary() // Override the salary calculation function.
    { // Start the calculateSalary function.
        return hours * rate; // Calculate salary by multiplying hours and rate.
    } // End the function.

    void display() // Override the display function.
    { // Start the display function.
        Employee::display(); // Call the base class display function.
        cout << "Salary: Rs. " << calculateSalary() << endl; // Display the part-time salary.
    } // End the display function.
}; // End the PartTimeEmployee class.

class Intern : public Employee // Create Intern derived from Employee.
{ // Start the Intern class.

private: // Make the following member private.
    float stipend; // Store the intern's stipend.

public: // Make the following members accessible from outside the class.
    Intern(int id, string name, float internStipend) // Create a parameterized constructor.
        : Employee(id, name) // Call the base class constructor.
    { // Start the constructor body.
        stipend = internStipend; // Store the stipend amount.
    } // End the constructor.

    float calculateSalary() // Override the salary calculation function.
    { // Start the calculateSalary function.
        return stipend; // Return the stipend.
    } // End the function.

    void display() // Override the display function.
    { // Start the display function.
        Employee::display(); // Call the base class display function.
        cout << "Stipend: Rs. " << calculateSalary() << endl; // Display the intern stipend.
    } // End the display function.
}; // End the Intern class.

int main() // Start the main function.
{ // Start the main function body.
    FullTimeEmployee e1(101, "Rahul", 50000); // Create a FullTimeEmployee object.
    PartTimeEmployee e2(102, "Priya", 80, 300); // Create a PartTimeEmployee object.
    Intern e3(103, "Amit", 15000); // Create an Intern object.

    Employee* employees[3]; // Create an array of three base-class pointers.

    employees[0] = &e1; // Store the address of the full-time employee object.
    employees[1] = &e2; // Store the address of the part-time employee object.
    employees[2] = &e3; // Store the address of the intern object.

    cout << "EMPLOYEE PAYROLL SYSTEM" << endl; // Display the program heading.
    cout << "------------------------" << endl; // Display a separator line.

    for (int i = 0; i < 3; i++) // Repeat the loop three times.
    { // Start the for loop.
        employees[i]->display(); // Call the appropriate derived-class display function using runtime polymorphism.
        cout << "------------------------" << endl; // Display a separator line.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.