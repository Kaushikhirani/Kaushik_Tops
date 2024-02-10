#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, string accNum, string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    // Function to withdraw an amount
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a bank account object
    BankAccount account1("John Doe", "123456789", "Savings", 1000.0);

    // Depositing and withdrawing some amounts
    account1.deposit(500.0);
    account1.withdraw(200.0);

    // Displaying account information
    account1.display();

    return 0;
}
