#include <iostream>
#include <string>
using namespace std;

const int MAX_LECTURERS = 5;

class LectureDetails {
private:
    struct Lecturer {
        string name;
        string subject;
        string course;
    };

    int numLecturers;
    Lecturer lecturers[MAX_LECTURERS];

public:
    LectureDetails() {
        numLecturers = 0;
    }

    void assignInitialValues() {
        numLecturers = 0;
    }

    void addLectureDetails() {
        if (numLecturers >= MAX_LECTURERS) {
            cout << "Maximum number of lecturers reached." << endl;
            return;
        }

        cout << "Enter lecturer name: ";
        getline(cin, lecturers[numLecturers].name);
        cout << "Enter subject name: ";
        getline(cin, lecturers[numLecturers].subject);
        cout << "Enter course name: ";
        getline(cin, lecturers[numLecturers].course);

        numLecturers++;
    }

    void displayLectureDetails() {
        for (int i = 0; i < numLecturers; i++) {
            cout << "Lecturer name: " << lecturers[i].name << endl;
            cout << "Subject name: " << lecturers[i].subject << endl;
            cout << "Course name: " << lecturers[i].course << endl << endl;
        }
    }
};

int main() {
    LectureDetails lectureDetails;

    lectureDetails.assignInitialValues();

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for lecturer " << i+1 << ":" << endl;
        lectureDetails.addLectureDetails();
        cout << endl;
    }

    cout << "Lecture details:" << endl;
    lectureDetails.displayLectureDetails();

    return 0;
}
