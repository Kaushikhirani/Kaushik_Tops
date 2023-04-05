#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount() {
        name = "";
        accountNumber = 0;
        accountType = "";
        balance = 0.0;
    }

    void assignValues(string n, int num, string type, double bal) {
        name = n;
        accountNumber = num;
        accountType = type;
        balance = bal
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Error: insufficient funds." << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.assignValues("Hirani Kaushik", 364846377, "Checking", 1000.0);
    account.display();

    account.deposit(500.0);
    account.display();

    account.withdraw(2000.0);
    account.display();

    account.withdraw(500.0);
    account.display();

    return 0;
}
