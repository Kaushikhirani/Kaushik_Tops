#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int NUM_STUDENTS = 4;

class StudentMarks {
private:
    struct Student {
        int rollNo;
        int sub1;
        int sub2;
        int sub3;
        int total;
        double percentage;
    };

    Student students[NUM_STUDENTS];

public:
    void assignValues() {
        for (int i = 0; i < NUM_STUDENTS; i++) {
            students[i].rollNo = i+1;

            cout << "Enter marks for student " << students[i].rollNo << ":" << endl;
            cout << "Sub1: ";
            cin >> students[i].sub1;
            cout << "Sub2: ";
            cin >> students[i].sub2;
            cout << "Sub3: ";
            cin >> students[i].sub3;

            students[i].total = students[i].sub1 + students[i].sub2 + students[i].sub3;
            students[i].percentage = static_cast<double>(students[i].total) / 3.0;
        }
    }

    void displayMarks() {
        cout << "Roll No" << setw(7) << "Sub1" << setw(7) << "Sub2" << setw(7) << "Sub3" << setw(9) << "Total" << setw(14) << "Percentage" << endl;

        for (int i = 0; i < NUM_STUDENTS; i++) {
            cout << setw(5) << students[i].rollNo << setw(8) << students[i].sub1 << setw(7) << students[i].sub2 << setw(7) << students[i].sub3 << setw(8) << students[i].total << setw(13) << fixed << setprecision(2) << students[i].percentage << endl;
        }
    }
};

int main() {
    StudentMarks studentMarks;

    studentMarks.assignValues();

    cout << endl << "Student marks:" << endl;
    studentMarks.displayMarks();

    return 0;
}
