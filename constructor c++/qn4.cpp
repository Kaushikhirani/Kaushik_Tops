#include <iostream>
using namespace std;

class Bankaccount {
private:
    int accountnumber;
    double balance;

public:
    Bankaccount(int accnum, double bal) {
        accountnumber = accnum;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Bankaccount account(123456, 1000.0);

    cout << "Initial balance: " << account.getBalance() << endl;

    double depositAmount, withdrawAmount;

    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Final balance: " << account.getBalance() << endl;

    return 0;
}
