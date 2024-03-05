#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setCompany(string c) {
        company = c;
    }

    string getCompany() {
        return company;
    }

    void setModel(string m) {
        model = m;
    }

    string getModel() {
        return model;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car car;

    string company, model;
    int year;

    cout << "Enter company name: ";
    cin >> company;
    car.setCompany(company);

    cout << "Enter model name: ";
    cin >> model;
    car.setModel(model);

    cout << "Enter year: ";
    cin >> year;
    car.setYear(year);

    cout << "Car Details:" << endl;
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}
