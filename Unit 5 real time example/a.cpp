#include <iostream> // Include the input-output stream library.
using namespace std; // Use the standard namespace.

class BankAccount // Define a BankAccount class.
{ // Start the class body.
private: // Start the private section.
    int accountNumber; // Store the account number.
    double balance; // Store the account balance.

public: // Start the public section.
    BankAccount(int accNo, double initialBalance) // Define a parameterized constructor.
    { // Start the constructor body.
        accountNumber = accNo; // Assign the account number.
        balance = initialBalance; // Assign the initial balance.
    } // End the constructor.

    void deposit(double amount) // Define a function to deposit money.
    { // Start the deposit function.
        if (amount > 0) // Check whether the deposit amount is positive.
        { // Start the if block.
            balance = balance + amount; // Add the amount to the balance.
            cout << "Amount deposited successfully." << endl; // Display the success message.
        } // End the if block.
        else // Execute when the amount is not positive.
        { // Start the else block.
            cout << "Invalid deposit amount." << endl; // Display an error message.
        } // End the else block.
    } // End the deposit function.

    void withdraw(double amount) // Define a function to withdraw money.
    { // Start the withdraw function.
        if (amount > 0 && amount <= balance) // Check whether withdrawal is valid and balance is sufficient.
        { // Start the if block.
            balance = balance - amount; // Subtract the amount from the balance.
            cout << "Amount withdrawn successfully." << endl; // Display the success message.
        } // End the if block.
        else // Execute when withdrawal is invalid.
        { // Start the else block.
            cout << "Invalid withdrawal or insufficient balance." << endl; // Display an error message.
        } // End the else block.
    } // End the withdraw function.

    void display() // Define a function to display account details.
    { // Start the display function.
        cout << "Account Number: " << accountNumber << endl; // Display the account number.
        cout << "Balance: " << balance << endl; // Display the current balance.
    } // End the display function.
}; // End the BankAccount class.

int main() // Start the main function.
{ // Start the main function body.
    BankAccount account(101, 5000); // Create a bank account with account number 101 and balance 5000.

    account.display(); // Display the initial account details.
    account.deposit(1500); // Deposit 1500 into the account.
    account.withdraw(2000); // Withdraw 2000 from the account.
    account.display(); // Display the updated account details.

    return 0; // Return 0 to indicate successful execution.
} // End the main function.