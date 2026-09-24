#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library to store device names and locations.
#include <vector> // Include the vector library to store multiple devices.

using namespace std; // Use the standard namespace.

class SmartDevice // Create a class named SmartDevice.
{ // Start the SmartDevice class.

private: // Make the following data members private.
    int deviceID; // Declare an integer variable to store the device ID.
    string deviceName; // Declare a string variable to store the device name.
    string location; // Declare a string variable to store the device location.
    bool status; // Declare a Boolean variable to store ON or OFF status.

public: // Make the following members accessible outside the class.
    SmartDevice(int id, string name, string deviceLocation) // Create a parameterized constructor.
    { // Start the constructor body.
        deviceID = id; // Store the device ID.
        deviceName = name; // Store the device name.
        location = deviceLocation; // Store the device location.
        status = false; // Set the initial device status to OFF.
    } // End the constructor.

    void turnOn() // Create a function to turn the device ON.
    { // Start the turnOn function.
        status = true; // Change the device status to ON.
    } // End the turnOn function.

    void turnOff() // Create a function to turn the device OFF.
    { // Start the turnOff function.
        status = false; // Change the device status to OFF.
    } // End the turnOff function.

    void display() // Create a function to display device information.
    { // Start the display function.
        cout << "Device ID: " << deviceID << endl; // Display the device ID.
        cout << "Device Name: " << deviceName << endl; // Display the device name.
        cout << "Location: " << location << endl; // Display the device location.

        if (status == true) // Check whether the device status is ON.
        { // Start the if block.
            cout << "Status: ON" << endl; // Display ON when status is true.
        } // End the if block.
        else // Execute this block when the status is false.
        { // Start the else block.
            cout << "Status: OFF" << endl; // Display OFF when status is false.
        } // End the else block.

        cout << "------------------------" << endl; // Display a separator line.
    } // End the display function.
}; // End the SmartDevice class.

int main() // Start the main function.
{ // Start the main function body.
    vector<SmartDevice> devices; // Create a vector to store SmartDevice objects.

    devices.push_back(SmartDevice(101, "Smart Light", "Living Room")); // Create and add a smart light.
    devices.push_back(SmartDevice(102, "Smart Fan", "Bedroom")); // Create and add a smart fan.
    devices.push_back(SmartDevice(103, "Security Camera", "Main Door")); // Create and add a security camera.

    devices[0].turnOn(); // Turn ON the first device.
    devices[2].turnOn(); // Turn ON the third device.

    cout << "SMART HOME DEVICE MANAGER" << endl; // Display the program heading.

    for (int i = 0; i < devices.size(); i++) // Repeat the loop for every smart device.
    { // Start the for loop.
        devices[i].display(); // Display the details of the current device.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.