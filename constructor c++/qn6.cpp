#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string n, int id, double sal)
	 {
        name = n;
        employeeID = id;
        salary = sal;
    }

    void setsalary(double performance) 
	{
        if (performance > 0.8)
		 {
            salary *= 1.1; 
        } else if (performance >= 0.6)
		 {
            salary *= 1.05;
        } 
		else
		 {
            
        }
    }

    double getsalary()
	 {
        return salary;
    }
};

int main()
 {
    string name;
    int id;
    double salary, performance;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter employee salary: ";
    cin >> salary;

    cout << "Enter employee performance (between 0 and 1): ";
    cin >> performance;

    Employee emp(name, id, salary);

    emp.setsalary(performance);

    cout << "Updated salary for employee " << name << " (ID: " << id << "): " << emp.getsalary() << endl;

    return 0;
}
