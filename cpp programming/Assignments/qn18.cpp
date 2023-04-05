#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        void input_data() {
            cout << "Enter name and age: ";
            cin >> name >> age;
        }
        void display_data() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : virtual public Person {
    protected:
        float percentage;
    public:
        void input_data() {
            Person::input_data();
            cout << "Enter percentage: ";
            cin >> percentage;
        }
        void display_data() {
            Person::display_data();
            cout << "Percentage: " << percentage << endl;
        }
};

class Teacher : virtual public Person {
    protected:
        float salary;
    public:
        void input_data() {
            Person::input_data();
            cout << "Enter salary: ";
            cin >> salary;
        }
        void display_data() {
            Person::display_data();
            cout << "Salary: " << salary << endl;
        }
};

class StudentTeacher : public Student, public Teacher {
    public:
        void input_data() {
            Student::input_data();
            Teacher::input_data();
        }
        void display_data() {
            Student::display_data();
            Teacher::display_data();
        }
};

int main() {
    StudentTeacher st;
    st.input_data();
    st.display_data();
    return 0;
}
