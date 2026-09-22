#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library.

using namespace std; // Use the standard namespace.

class Vehicle // Create a base class named Vehicle.
{ // Start the Vehicle class.

protected: // Make the following members accessible inside derived classes.
    string vehicleNumber; // Store the vehicle registration number.
    string driverName; // Store the driver's name.

public: // Make the following members accessible outside the class.
    Vehicle(string number, string driver) // Create a parameterized constructor.
    { // Start the constructor body.
        vehicleNumber = number; // Store the vehicle number.
        driverName = driver; // Store the driver name.
    } // End the constructor.

    virtual void display() // Create a virtual function to display vehicle details.
    { // Start the display function.
        cout << "Vehicle Number: " << vehicleNumber << endl; // Display the vehicle number.
        cout << "Driver Name: " << driverName << endl; // Display the driver name.
    } // End the display function.

    virtual void calculateCost() // Create a virtual function to calculate operating cost.
    { // Start the calculateCost function.
        cout << "Operating Cost: Not Available" << endl; // Display the default message.
    } // End the function.

    virtual ~Vehicle() // Create a virtual destructor.
    { // Start the destructor.
    } // End the destructor.
}; // End the Vehicle class.

class Truck : public Vehicle // Create Truck as a derived class of Vehicle.
{ // Start the Truck class.

private: // Make the following member private.
    float load; // Store the load carried by the truck.

public: // Make the following members accessible outside the class.
    Truck(string number, string driver, float truckLoad) // Create a parameterized constructor.
        : Vehicle(number, driver) // Call the Vehicle constructor.
    { // Start the constructor body.
        load = truckLoad; // Store the truck load.
    } // End the constructor.

    void display() // Override the display function.
    { // Start the display function.
        Vehicle::display(); // Call the base class display function.
        cout << "Vehicle Type: Truck" << endl; // Display the vehicle type.
        cout << "Load: " << load << " tons" << endl; // Display the load carried by the truck.
    } // End the display function.

    void calculateCost() // Override the cost calculation function.
    { // Start the calculateCost function.
        cout << "Operating Cost: Rs. 15000" << endl; // Display the truck operating cost.
    } // End the function.
}; // End the Truck class.

class DeliveryVan : public Vehicle // Create DeliveryVan as a derived class of Vehicle.
{ // Start the DeliveryVan class.

public: // Make the following members accessible outside the class.
    DeliveryVan(string number, string driver) // Create a parameterized constructor.
        : Vehicle(number, driver) // Call the Vehicle constructor.
    { // Start the constructor body.
    } // End the constructor.

    void display() // Override the display function.
    { // Start the display function.
        Vehicle::display(); // Call the base class display function.
        cout << "Vehicle Type: Delivery Van" << endl; // Display the vehicle type.
    } // End the display function.

    void calculateCost() // Override the cost calculation function.
    { // Start the calculateCost function.
        cout << "Operating Cost: Rs. 8000" << endl; // Display the delivery van operating cost.
    } // End the function.
}; // End the DeliveryVan class.

class Bike : public Vehicle // Create Bike as a derived class of Vehicle.
{ // Start the Bike class.

public: // Make the following members accessible outside the class.
    Bike(string number, string driver) // Create a parameterized constructor.
        : Vehicle(number, driver) // Call the Vehicle constructor.
    { // Start the constructor body.
    } // End the constructor.

    void display() // Override the display function.
    { // Start the display function.
        Vehicle::display(); // Call the base class display function.
        cout << "Vehicle Type: Bike" << endl; // Display the vehicle type.
    } // End the display function.

    void calculateCost() // Override the cost calculation function.
    { // Start the calculateCost function.
        cout << "Operating Cost: Rs. 3000" << endl; // Display the bike operating cost.
    } // End the function.
}; // End the Bike class.

int main() // Start the main function.
{ // Start the main function body.
    Truck truck("MH12AB1234", "Rahul", 10); // Create a Truck object.
    DeliveryVan van("MH12CD5678", "Priya"); // Create a DeliveryVan object.
    Bike bike("MH12EF9012", "Amit"); // Create a Bike object.

    Vehicle* fleet[3]; // Create an array of three Vehicle pointers.

    fleet[0] = &truck; // Store the address of the Truck object.
    fleet[1] = &van; // Store the address of the DeliveryVan object.
    fleet[2] = &bike; // Store the address of the Bike object.

    cout << "VEHICLE FLEET MANAGEMENT" << endl; // Display the program heading.
    cout << "------------------------" << endl; // Display a separator.

    for (int i = 0; i < 3; i++) // Repeat the loop for all vehicles.
    { // Start the for loop.
        fleet[i]->display(); // Display the current vehicle details using runtime polymorphism.
        fleet[i]->calculateCost(); // Calculate the cost using the appropriate derived class.
        cout << "------------------------" << endl; // Display a separator.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.