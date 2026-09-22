#include <iostream> // Include the input-output stream library.
#include <vector> // Include the vector container library.
#include <map> // Include the map container library.
#include <string> // Include the string library.
using namespace std; // Use the standard namespace.

int main() // Start the main function.
{ // Start the main function body.
    vector<string> logs; // Create a vector to store server log messages.

    logs.push_back("200"); // Add a successful HTTP status code.
    logs.push_back("404"); // Add a page-not-found status code.
    logs.push_back("200"); // Add another successful status code.
    logs.push_back("500"); // Add a server-error status code.
    logs.push_back("404"); // Add another page-not-found status code.
    logs.push_back("200"); // Add another successful status code.

    map<string, int> statusCount; // Create a map to count each status code.

    for (int i = 0; i < logs.size(); i++) // Loop through all log entries.
    { // Start the for loop.
        statusCount[logs[i]]++; // Increase the count for the current status code.
    } // End the for loop.

    cout << "--- Web Server Log Analysis ---" << endl; // Display the heading.

    map<string, int>::iterator it; // Declare an iterator for the status map.

    for (it = statusCount.begin(); it != statusCount.end(); ++it) // Traverse all status codes.
    { // Start the loop.
        cout << "Status Code " << it->first << ": " << it->second << " times" << endl; // Display each status code and its count.
    } // End the loop.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.