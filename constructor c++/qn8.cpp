#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    int pincode;

public:
    void setAddress(string st, string ci, string s, int pin) {
        street = st;
        city = ci;
        state = s;
        pincode = pin;
    }

    void displayAddress() {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << pincode << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    Address address;

public:
    void setData(string n, string cls, int roll, int m) {
        name = n;
        studentClass = cls;
        rollNumber = roll;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void setAddress(string st, string ci, string s, int pin) {
        address.setAddress(st, ci, s, pin);
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

int main() {
    vector<Student> students;
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name, studentClass;
        int rollNumber, marks;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter class of student " << i + 1 << ": ";
        cin >> studentClass;
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> rollNumber;
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks;

        Student student;
        student.setData(name, studentClass, rollNumber, marks);

        string street, city, state;
        int pincode;
        cout << "Enter street address of student " << i + 1 << ": ";
        cin >> street;
        cout << "Enter city of student " << i + 1 << ": ";
        cin >> city;
        cout << "Enter state of student " << i + 1 << ": ";
        cin >> state;
        cout << "Enter pincode of student " << i + 1 << ": ";
        cin >> pincode;
        student.setAddress(street, city, state, pincode);

        students.push_back(student);
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].displayInfo();
    }

    return 0;
}
