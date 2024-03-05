#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setname(string n) {
        name = n;
    }

    string getname() {
        return name;
    }

    void setage(int a) {
        age = a;
    }

    int getage() {
        return age;
    }

    void setcountry(string c) {
        country = c;
    }

    string getcountry() {
        return country;
    }
};

int main() {
    Person person;

    string name, country;
    int age;

    cout << "Enter name: ";
    cin >> name;
    person.setname(name);

    cout << "Enter age: ";
    cin >> age;
    person.setage(age);

    cout << "Enter country: ";
    cin >> country;
    person.setcountry(country);

    cout << "Name: " << person.getname() << endl;
    cout << "Age: " << person.getage() << endl;
    cout << "Country: " << person.getcountry() << endl;

    return 0;
}
