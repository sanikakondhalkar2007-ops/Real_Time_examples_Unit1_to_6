#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library.

using namespace std; // Use the standard namespace.

class PaymentMethod // Create an abstract base class named PaymentMethod.
{ // Start the PaymentMethod class.

protected: // Make the following member accessible to derived classes.
    float amount; // Declare a float variable to store the payment amount.

public: // Make the following members accessible from outside the class.
    PaymentMethod(float paymentAmount) // Create a parameterized constructor.
    { // Start the constructor body.
        amount = paymentAmount; // Store the payment amount.
    } // End the constructor.

    virtual void pay() = 0; // Declare a pure virtual function for making payment.

    virtual void showDetails() = 0; // Declare a pure virtual function for displaying payment details.

    virtual ~PaymentMethod() // Create a virtual destructor.
    { // Start the destructor body.
    } // End the destructor.
}; // End the PaymentMethod class.

class CreditCardPayment : public PaymentMethod // Create CreditCardPayment derived from PaymentMethod.
{ // Start the CreditCardPayment class.

private: // Make the following member private.
    string cardNumber; // Store the credit card number.

public: // Make the following members accessible from outside the class.
    CreditCardPayment(float paymentAmount, string number) // Create a parameterized constructor.
        : PaymentMethod(paymentAmount) // Call the base class constructor.
    { // Start the constructor body.
        cardNumber = number; // Store the card number.
    } // End the constructor.

    void pay() // Override the pure virtual pay function.
    { // Start the pay function.
        cout << "Payment of Rs. " << amount << " made using Credit Card." << endl; // Display the credit card payment message.
    } // End the pay function.

    void showDetails() // Override the showDetails function.
    { // Start the showDetails function.
        cout << "Method: Credit Card" << endl; // Display the payment method.
        cout << "Card Number: " << cardNumber << endl; // Display the card number.
        cout << "Amount: Rs. " << amount << endl; // Display the payment amount.
    } // End the showDetails function.
}; // End the CreditCardPayment class.

class UPIPayment : public PaymentMethod // Create UPIPayment derived from PaymentMethod.
{ // Start the UPIPayment class.

private: // Make the following member private.
    string upiID; // Store the UPI ID.

public: // Make the following members accessible from outside the class.
    UPIPayment(float paymentAmount, string id) // Create a parameterized constructor.
        : PaymentMethod(paymentAmount) // Call the base class constructor.
    { // Start the constructor body.
        upiID = id; // Store the UPI ID.
    } // End the constructor.

    void pay() // Override the pay function.
    { // Start the pay function.
        cout << "Payment of Rs. " << amount << " made using UPI." << endl; // Display the UPI payment message.
    } // End the pay function.

    void showDetails() // Override the showDetails function.
    { // Start the showDetails function.
        cout << "Method: UPI" << endl; // Display the payment method.
        cout << "UPI ID: " << upiID << endl; // Display the UPI ID.
        cout << "Amount: Rs. " << amount << endl; // Display the payment amount.
    } // End the showDetails function.
}; // End the UPIPayment class.

class NetBankingPayment : public PaymentMethod // Create NetBankingPayment derived from PaymentMethod.
{ // Start the NetBankingPayment class.

private: // Make the following member private.
    string bankName; // Store the bank name.

public: // Make the following members accessible from outside the class.
    NetBankingPayment(float paymentAmount, string bank) // Create a parameterized constructor.
        : PaymentMethod(paymentAmount) // Call the base class constructor.
    { // Start the constructor body.
        bankName = bank; // Store the bank name.
    } // End the constructor.

    void pay() // Override the pay function.
    { // Start the pay function.
        cout << "Payment of Rs. " << amount << " made using Net Banking." << endl; // Display the net banking payment message.
    } // End the pay function.

    void showDetails() // Override the showDetails function.
    { // Start the showDetails function.
        cout << "Method: Net Banking" << endl; // Display the payment method.
        cout << "Bank: " << bankName << endl; // Display the bank name.
        cout << "Amount: Rs. " << amount << endl; // Display the payment amount.
    } // End the showDetails function.
}; // End the NetBankingPayment class.

int main() // Start the main function.
{ // Start the main function body.
    CreditCardPayment p1(5000, "XXXX-1234"); // Create a CreditCardPayment object.
    UPIPayment p2(2500, "rahul@upi"); // Create a UPIPayment object.
    NetBankingPayment p3(7500, "ABC Bank"); // Create a NetBankingPayment object.

    PaymentMethod* payments[3]; // Create an array of three PaymentMethod pointers.

    payments[0] = &p1; // Store the address of the credit card object.
    payments[1] = &p2; // Store the address of the UPI object.
    payments[2] = &p3; // Store the address of the net banking object.

    cout << "DIGITAL PAYMENT GATEWAY" << endl; // Display the program heading.
    cout << "------------------------" << endl; // Display a separator.

    for (int i = 0; i < 3; i++) // Repeat the loop for all payment methods.
    { // Start the for loop.
        payments[i]->showDetails(); // Display details using runtime polymorphism.
        payments[i]->pay(); // Make payment using the appropriate derived-class function.
        cout << "------------------------" << endl; // Display a separator.
    } // End the for loop.

    return 0; // Return 0 for successful execution.
} // End the main function.