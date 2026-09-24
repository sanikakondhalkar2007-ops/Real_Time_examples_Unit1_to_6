#include <iostream> // Include the input-output stream library.
#include <string> // Include the string library.

using namespace std; // Use the standard namespace.

class Account // Create a base class named Account.
{ // Start the Account class.

protected: // Make the following members accessible inside derived classes.
    int accountNumber; // Store the account number.
    string holderName; // Store the account holder's name.
    float balance; // Store the account balance.

public: // Make the following members accessible outside the class.
    Account(int number, string name, float amount) // Create a parameterized constructor.
    { // Start the constructor body.
        accountNumber = number; // Store the account number.
        holderName = name; // Store the account holder's name.
        balance = amount; // Store the initial balance.
    } // End the constructor.

    void deposit(float amount) // Create a function to deposit money.
    { // Start the deposit function.
        balance = balance + amount; // Add the deposited amount to the balance.
        cout << "Deposited: Rs. " << amount << endl; // Display the deposited amount.
    } // End the deposit function.

    virtual void withdraw(float amount) // Create a virtual function to withdraw money.
    { // Start the withdraw function.
        if (amount <= balance) // Check whether sufficient balance is available.
        { // Start the if block.
            balance = balance - amount; // Subtract the withdrawal amount from the balance.
            cout << "Withdrawn: Rs. " << amount << endl; // Display the withdrawn amount.
        } // End the if block.
        else // Execute when balance is insufficient.
        { // Start the else block.
            cout << "Insufficient balance." << endl; // Display the insufficient balance message.
        } // End the else block.
    } // End the withdraw function.

    virtual void calculateInterest() // Create a virtual function to calculate interest.
    { // Start the function.
        cout << "Interest calculation not available." << endl; // Display the default message.
    } // End the function.

    virtual void display() // Create a virtual function to display account details.
    { // Start the display function.
        cout << "Account Number: " << accountNumber << endl; // Display the account number.
        cout << "Holder Name: " << holderName << endl; // Display the holder name.
        cout << "Balance: Rs. " << balance << endl; // Display the current balance.
    } // End the display function.

    virtual ~Account() // Create a virtual destructor.
    { // Start the destructor.
    } // End the destructor.
}; // End the Account class.

class SavingsAccount : public Account // Create SavingsAccount derived from Account.
{ // Start the SavingsAccount class.

public: // Make the following members accessible outside the class.
    SavingsAccount(int number, string name, float amount) // Create a parameterized constructor.
        : Account(number, name, amount) // Call the Account constructor.
    { // Start the constructor body.
    } // End the constructor.

    void calculateInterest() // Override the interest calculation function.
    { // Start the function.
        float interest = balance * 0.04; // Calculate 4 percent interest.
        cout << "Interest: Rs. " << interest << endl; // Display the calculated interest.
    } // End the function.

    void display() // Override the display function.
    { // Start the display function.
        cout << "Account Type: Savings Account" << endl; // Display the account type.
        Account::display(); // Call the base class display function.
    } // End the display function.
}; // End the SavingsAccount class.

class CurrentAccount : public Account // Create CurrentAccount derived from Account.
{ // Start the CurrentAccount class.

public: // Make the following members accessible outside the class.
    CurrentAccount(int number, string name, float amount) // Create a parameterized constructor.
        : Account(number, name, amount) // Call the Account constructor.
    { // Start the constructor body.
    } // End the constructor.

    void calculateInterest() // Override the interest calculation function.
    { // Start the function.
        cout << "Current Account: No interest." << endl; // Display that current account has no interest.
    } // End the function.

    void display() // Override the display function.
    { // Start the display function.
        cout << "Account Type: Current Account" << endl; // Display the account type.
        Account::display(); // Call the base class display function.
    } // End the display function.
}; // End the CurrentAccount class.

class FixedDepositAccount : public Account // Create FixedDepositAccount derived from Account.
{ // Start the FixedDepositAccount class.

public: // Make the following members accessible outside the class.
    FixedDepositAccount(int number, string name, float amount) // Create a parameterized constructor.
        : Account(number, name, amount) // Call the Account constructor.
    { // Start the constructor body.
    } // End the constructor.

    void calculateInterest() // Override the interest calculation function.
    { // Start the function.
        float interest = balance * 0.07; // Calculate 7 percent interest.
        cout << "Interest: Rs. " << interest << endl; // Display the calculated interest.
    } // End the function.

    void display() // Override the display function.
    { // Start the display function.
        cout << "Account Type: Fixed Deposit Account" << endl; // Display the account type.
        Account::display(); // Call the base class display function.
    } // End the display function.
}; // End the FixedDepositAccount class.

int main() // Start the main function.
{ // Start the main function body.
    SavingsAccount savings(101, "Rahul", 50000); // Create a SavingsAccount object.
    CurrentAccount current(102, "Priya", 75000); // Create a CurrentAccount object.
    FixedDepositAccount fixed(103, "Amit", 100000); // Create a FixedDepositAccount object.

    Account* accounts[3]; // Create an array of three Account pointers.

    accounts[0] = &savings; // Store the address of the savings account.
    accounts[1] = &current; // Store the address of the current account.
    accounts[2] = &fixed; // Store the address of the fixed deposit account.

    cout << "BANKING SYSTEM" << endl; // Display the program heading.
    cout << "========================" << endl; // Display a separator.

    for (int i = 0; i < 3; i++) // Repeat the loop for all three accounts.
    { // Start the for loop.
        accounts[i]->display(); // Display account details using runtime polymorphism.
        accounts[i]->calculateInterest(); // Calculate interest using the appropriate derived class.
        cout << "------------------------" << endl; // Display a separator.
    } // End the for loop.

    savings.deposit(5000); // Deposit Rs. 5000 into the savings account.
    savings.withdraw(3000); // Withdraw Rs. 3000 from the savings account.

    cout << "Updated Savings Account:" << endl; // Display a heading for the updated account.
    savings.display(); // Display the updated savings account details.

    return 0; // Return 0 for successful execution.
} // End the main function.