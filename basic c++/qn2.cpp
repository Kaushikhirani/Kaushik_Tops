#include <iostream>
#include <string>

using namespace std;

class Bankaccount
 {
private:
    string depositorname;
    string accountnum;
    string accounttype;
    double balance;

public:
   
    Bankaccount(string name, string accnum, string type, double initialbalance)
	 {
        depositorname = name;
        accountnum = accnum;
        accounttype = type;
        balance = initialbalance;
    }

    
    void deposit(double amount) 
	{
        balance += amount;
        cout << "Amount deposited successfully. New balance rs. " << balance << endl;
    }

    
    void withdraw(double amount)
	 {
        if (amount > balance)
		 {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        } 
		else
		 {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance rs." << balance << endl;
        }
    }

   
    void display()
	 {
        cout << "Depositor name: " << depositorname << endl;
        cout << "Account number: " << accountnum << endl;
        cout << "Account type: " << accounttype << endl;
        cout << "Current balance rs. " << balance << endl;
    }
};

int main() 
{

    Bankaccount myaccount("Hirani Kaushik", "1234567890", "Savings", 1000.0);

    
    myaccount.deposit(500.0);


    myaccount.withdraw(200.0);

    
    myaccount.display();

    return 0;
}
