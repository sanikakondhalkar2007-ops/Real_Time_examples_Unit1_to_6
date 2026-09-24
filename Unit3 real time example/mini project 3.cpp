#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library.

using namespace std; // Use the standard namespace.

class Media // Create an abstract base class named Media.
{ // Start the Media class.

protected: // Make the following member accessible to derived classes.
    string fileName; // Store the media file name.

public: // Make the following members accessible outside the class.
    Media(string name) // Create a parameterized constructor.
    { // Start the constructor body.
        fileName = name; // Store the file name.
    } // End the constructor.

    virtual void play() = 0; // Declare a pure virtual play function.
    virtual void pause() = 0; // Declare a pure virtual pause function.
    virtual void stop() = 0; // Declare a pure virtual stop function.
    virtual void showDetails() = 0; // Declare a pure virtual function to show media details.

    virtual ~Media() {} // Create a virtual destructor.
}; // End the Media class.

class Audio : public Media // Create Audio as a derived class of Media.
{ // Start the Audio class.

public: // Make the following members accessible outside the class.
    Audio(string name) // Create a parameterized constructor.
        : Media(name) // Call the Media class constructor.
    { // Start the constructor body.
    } // End the constructor.

    void play() // Override the play function.
    { // Start the play function.
        cout << "Playing audio: " << fileName << endl; // Display the audio playing message.
    } // End the play function.

    void pause() // Override the pause function.
    { // Start the pause function.
        cout << "Audio paused." << endl; // Display the audio paused message.
    } // End the pause function.

    void stop() // Override the stop function.
    { // Start the stop function.
        cout << "Audio stopped." << endl; // Display the audio stopped message.
    } // End the stop function.

    void showDetails() // Override the showDetails function.
    { // Start the showDetails function.
        cout << "Type: Audio" << endl; // Display the media type.
        cout << "File: " << fileName << endl; // Display the audio file name.
    } // End the showDetails function.
}; // End the Audio class.

class Video : public Media // Create Video as a derived class of Media.
{ // Start the Video class.

public: // Make the following members accessible outside the class.
    Video(string name) // Create a parameterized constructor.
        : Media(name) // Call the Media class constructor.
    { // Start the constructor body.
    } // End the constructor.

    void play() // Override the play function.
    { // Start the play function.
        cout << "Playing video: " << fileName << endl; // Display the video playing message.
    } // End the play function.

    void pause() // Override the pause function.
    { // Start the pause function.
        cout << "Video paused." << endl; // Display the video paused message.
    } // End the pause function.

    void stop() // Override the stop function.
    { // Start the stop function.
        cout << "Video stopped." << endl; // Display the video stopped message.
    } // End the stop function.

    void showDetails() // Override the showDetails function.
    { // Start the showDetails function.
        cout << "Type: Video" << endl; // Display the media type.
        cout << "File: " << fileName << endl; // Display the video file name.
    } // End the showDetails function.
}; // End the Video class.

class Image : public Media // Create Image as a derived class of Media.
{ // Start the Image class.

public: // Make the following members accessible outside the class.
    Image(string name) // Create a parameterized constructor.
        : Media(name) // Call the Media class constructor.
    { // Start the constructor body.
    } // End the constructor.

    void play() // Override the play function.
    { // Start the play function.
        cout << "Displaying image: " << fileName << endl; // Display the image message.
    } // End the play function.

    void pause() // Override the pause function.
    { // Start the pause function.
        cout << "Image display paused." << endl; // Display the pause message.
    } // End the pause function.

    void stop() // Override the stop function.
    { // Start the stop function.
        cout << "Image display stopped." << endl; // Display the stop message.
    } // End the stop function.

    void showDetails() // Override the showDetails function.
    { // Start the showDetails function.
        cout << "Type: Image" << endl; // Display the media type.
        cout << "File: " << fileName << endl; // Display the image file name.
    } // End the showDetails function.
}; // End the Image class.

int main() // Start the main function.
{ // Start the main function body.
    Audio audio("song.mp3"); // Create an Audio object.
    Video video("movie.mp4"); // Create a Video object.
    Image image("photo.jpg"); // Create an Image object.

    Media* media[3]; // Create an array of three Media pointers.

    media[0] = &audio; // Store the address of the Audio object.
    media[1] = &video; // Store the address of the Video object.
    media[2] = &image; // Store the address of the Image object.

    cout << "MEDIA PLAYER" << endl; // Display the program heading.
    cout << "------------------------" << endl; // Display a separator.

    for (int i = 0; i < 3; i++) // Repeat the loop for all media objects.
    { // Start the for loop.
        media[i]->showDetails(); // Display media details using runtime polymorphism.
        media[i]->play(); // Play the appropriate type of media.
        media[i]->pause(); // Pause the appropriate type of media.
        media[i]->stop(); // Stop the appropriate type of media.
        cout << "------------------------" << endl; // Display a separator.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.