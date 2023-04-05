#include <iostream>
using namespace std;

class Account {
    protected:
        string name;
        int account_no;
        float balance;
        float interest_rate;
    public:
        void input() {
            cout << "Enter customer name: ";
            cin >> name;
            cout << "Enter account number: ";
            cin >> account_no;
            cout << "Enter initial balance: ";
            cin >> balance;
            cout << "Enter interest rate: ";
            cin >> interest_rate;
        }
        void display() {
            cout << "Customer name: " << name << endl;
            cout << "Account number: " << account_no << endl;
            cout << "Balance: " << balance << endl;
        }
        void deposit(float amount) {
            balance += amount;
        }
        virtual void withdraw(float amount) = 0;
        virtual void calculate_interest() = 0;
};

class Savings_Account : public Account {
    public:
        void withdraw(float amount) {
            balance -= amount;
        }
        void calculate_interest() {
            float interest = balance * interest_rate / 100.0;
            balance += interest;
        }
};

class Current_Account : public Account {
    protected:
        float minimum_balance;
        float service_charge;
    public:
        void input() {
            Account::input();
            cout << "Enter minimum balance: ";
            cin >> minimum_balance;
            cout << "Enter service charge: ";
            cin >> service_charge;
        }
        void display() {
            Account::display();
            cout << "Minimum balance: " << minimum_balance << endl;
        }
        void withdraw(float amount) {
            if (balance - amount < minimum_balance) {
                cout << "Withdrawal not allowed. Minimum balance of " << minimum_balance << " required." << endl;
                return;
            }
            balance -= amount;
        }
        void calculate_interest() {
            // Current accounts do not earn interest
        }
        void impose_service_charge() {
            if (balance < minimum_balance) {
                balance -= service_charge;
                cout << "Service charge of " << service_charge << " imposed." << endl;
            }
        }
};

int main() {
    Savings_Account s;
    s.input();
    s.deposit(5000);
    s.display();
    s.calculate_interest();
    s.display();
    s.withdraw(2000);
    s.display();

    Current_Account c;
    c.input();
    c.deposit(10000);
    c.display();
    c.impose_service_charge();
    c.display();
    c.withdraw(8000);
    c.impose_service_charge();
    c.display();
    c.calculate_interest();
    c.display();
    return 0;
}
