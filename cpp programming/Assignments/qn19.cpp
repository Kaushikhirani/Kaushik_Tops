#include <iostream>
using namespace std;

class Student {
    protected:
        int roll;
    public:
        void input_roll() {
            cout << "Enter roll number: ";
            cin >> roll;
        }
        void display_roll() {
            cout << "Roll number: " << roll << endl;
        }
};

class Test : public Student {
    protected:
        int marks1, marks2;
    public:
        void input_marks() {
            cout << "Enter marks in two subjects: ";
            cin >> marks1 >> marks2;
        }
        void display_marks() {
            cout << "Marks in subject 1: " << marks1 << endl;
            cout << "Marks in subject 2: " << marks2 << endl;
        }
};

class Result : public Test {
    protected:
        int total;
    public:
        void calculate_total() {
            total = marks1 + marks2;
        }
        void display_total() {
            cout << "Total marks: " << total << endl;
        }
};

int main() {
    Result r;
    r.input_roll();
    r.input_marks();
    r.calculate_total();
    r.display_roll();
    r.display_marks();
    r.display_total();
    return 0;
}
