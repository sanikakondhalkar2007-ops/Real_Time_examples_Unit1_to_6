#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library to store text.
#include <vector> // Include the vector library to store multiple objects.

using namespace std; // Use the standard namespace so we can write cout, string, vector directly.

class Sensor // Create a class named Sensor.
{ // Start the body of the Sensor class.

private: // Make the following data members accessible only inside the class.
    int sensorID; // Declare an integer variable to store the sensor ID.
    string location; // Declare a string variable to store the sensor location.
    float temperature; // Declare a float variable to store temperature.
    float soilMoisture; // Declare a float variable to store soil moisture.

public: // Make the following members accessible from outside the class.
    Sensor(int id, string loc, float temp, float moisture) // Create a parameterized constructor with four parameters.
    { // Start the constructor body.
        sensorID = id; // Assign the value of id to sensorID.
        location = loc; // Assign the value of loc to location.
        temperature = temp; // Assign the value of temp to temperature.
        soilMoisture = moisture; // Assign the value of moisture to soilMoisture.
    } // End the constructor.

    void display() // Create a function to display sensor information.
    { // Start the display function.
        cout << "Sensor ID: " << sensorID << endl; // Display the sensor ID.
        cout << "Location: " << location << endl; // Display the sensor location.
        cout << "Temperature: " << temperature << " C" << endl; // Display the temperature.
        cout << "Soil Moisture: " << soilMoisture << "%" << endl; // Display the soil moisture percentage.
        cout << "------------------------" << endl; // Display a separator line.
    } // End the display function.
}; // End the Sensor class.

int main() // Start the main function.
{ // Start the main function body.
    vector<Sensor> sensors; // Create a vector named sensors to store Sensor objects.

    sensors.push_back(Sensor(101, "Field A", 28.5, 65.0)); // Create the first Sensor object and add it to the vector.
    sensors.push_back(Sensor(102, "Field B", 30.2, 55.5)); // Create the second Sensor object and add it to the vector.
    sensors.push_back(Sensor(103, "Field C", 27.8, 72.0)); // Create the third Sensor object and add it to the vector.

    cout << "SMART AGRICULTURE SENSOR MONITOR" << endl; // Display the program heading.

    for (int i = 0; i < sensors.size(); i++) // Repeat the loop for every Sensor object in the vector.
    { // Start the for loop body.
        sensors[i].display(); // Call the display function for the current Sensor object.
    } // End the for loop.

    return 0; // Return 0 to indicate successful program execution.
} // End the main function.