#include <iostream> // Include the input-output stream library.
#include <fstream> // Include the file handling library.
#include <string> // Include the string library.
using namespace std; // Use the standard namespace.

int main() // Start the main function.
{ // Start the main function body.
    ofstream createFile("server_log.txt"); // Create a server log file.
    
    createFile << "INFO User logged in" << endl; // Write an INFO log into the file.
    createFile << "ERROR Database connection failed" << endl; // Write an ERROR log into the file.
    createFile << "INFO User viewed product" << endl; // Write another INFO log.
    createFile << "WARNING High memory usage" << endl; // Write a WARNING log.
    createFile << "ERROR File not found" << endl; // Write another ERROR log.
    
    createFile.close(); // Close the file after writing.

    ifstream file("server_log.txt"); // Open the log file for reading.
    string line; // Declare a variable to store each log line.
    int infoCount = 0; // Store the number of INFO messages.
    int warningCount = 0; // Store the number of WARNING messages.
    int errorCount = 0; // Store the number of ERROR messages.

    while (getline(file, line)) // Read the log file line by line.
    { // Start the while loop.
        if (line.find("INFO") != string::npos) // Check whether the line contains INFO.
        { // Start the INFO condition.
            infoCount++; // Increase the INFO counter.
        } // End the INFO condition.

        if (line.find("WARNING") != string::npos) // Check whether the line contains WARNING.
        { // Start the WARNING condition.
            warningCount++; // Increase the WARNING counter.
        } // End the WARNING condition.

        if (line.find("ERROR") != string::npos) // Check whether the line contains ERROR.
        { // Start the ERROR condition.
            errorCount++; // Increase the ERROR counter.
        } // End the ERROR condition.
    } // End the while loop.

    file.close(); // Close the log file.

    cout << "\n--- Server Log Analysis ---" << endl; // Display the heading.
    cout << "INFO messages: " << infoCount << endl; // Display the number of INFO messages.
    cout << "WARNING messages: " << warningCount << endl; // Display the number of WARNING messages.
    cout << "ERROR messages: " << errorCount << endl; // Display the number of ERROR messages.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.