#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initialize(string n, int a) {
        name = n;
        age = a;
    }

    void readdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void writedata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void initialize(float p) {
        percentage = p;
    }

    void readData() {
        Person::readdata();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void writedata()
	 {
        Person::writedata();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void initialize(float s) {
        salary = s;
    }

    void readdata()
	 {
        Person::readdata();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void writedata()
	 {
        Person::writedata();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student details:" << endl;
    student.readdata();

    cout << "\nEnter teacher details:" << endl;
    teacher.readdata();

    cout << "\nStudent details:" << endl;
    student.writedata();

    cout << "\nTeacher details:" << endl;
    teacher.writedata();

    return 0;
}
