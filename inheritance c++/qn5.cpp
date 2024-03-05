#include <iostream>

using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Students {
protected:
    float subject1Marks, subject2Marks;

public:
    void inputTestMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2Marks;
    }

    void displayTestMarks() {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

class Result : public Test {
protected:
    float totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() {
        displayRollNumber();
        displayTestMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result result;

    cout << "Enter student roll number and test marks:" << endl;
    result.inputRollNumber();
    result.inputTestMarks();
    result.calculateTotalMarks();

    cout << "\nStudent Test Result:" << endl;
    result.displayResult();

    return 0;
}
