#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void inputStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks {
protected:
    float subject1, subject2, subject3;

public:
    void inputMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2;
        cout << "Enter marks for Subject 3: ";
        cin >> subject3;
    }

    void displayMarks() {
        cout << "Subject 1 Marks: " << subject1 << endl;
        cout << "Subject 2 Marks: " << subject2 << endl;
        cout << "Subject 3 Marks: " << subject3 << endl;
    }
};

class MarkSheet : public Student, public Marks {
public:
    void inputDetails() {
        inputStudentDetails();
        inputMarks();
    }

    void displayMarkSheet() {
        displayStudentDetails();
        displayMarks();
    }
};

int main() {
    MarkSheet markSheet;

    cout << "Enter student details and marks:" << endl;
    markSheet.inputDetails();

    cout << "\nStudent Mark Sheet:" << endl;
    markSheet.displayMarkSheet();

    return 0;
}
