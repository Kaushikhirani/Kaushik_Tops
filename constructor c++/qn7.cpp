#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void setDay(int d) {
        day = d;
    }

    int getDay() {
        return day;
    }

    void setMonth(int m) {
        month = m;
    }

    int getMonth() {
        return month;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }

    bool isValid() {
        if (year < 0) {
            return false;
        }
        if (month < 1 || month > 12) {
            return false;
        }
        if (day < 1 || day > 31) {
            return false;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return false;
        }
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {
                    return false;
                }
            } else {
                if (day > 28) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Date date;

    int day, month, year;

    cout << "Enter day: ";
    cin >> day;
    date.setDay(day);

    cout << "Enter month: ";
    cin >> month;
    date.setMonth(month);

    cout << "Enter year: ";
    cin >> year;
    date.setYear(year);

    if (date.isValid()) {
        cout << "Date is valid." << endl;
    } else {
        cout << "Date is not valid." << endl;
    }

    return 0;
}
