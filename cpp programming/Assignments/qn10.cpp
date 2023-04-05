#include <iostream>
using namespace std;

class Interest {
    int principal, year;
    float rate, interest;
    
public:
    Interest(int p, int y, int r) {
        principal = p;
        year = y;
        rate = r;
        interest = (principal * year * rate) / 100.0;
    }
    
    Interest(int p, int y, float r = 2.5) {
        principal = p;
        year = y;
        rate = r;
        interest = (principal * year * rate) / 100.0;
    }
    
    void display() {
        cout << "Principal: " << principal << endl;
        cout << "Year: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Interest: " << interest << endl;
    }
};

int main() {
    Interest obj1(1000, 2, 5);
    Interest obj2(2000, 3);
    
    obj1.display();
    obj2.display();
    
    return 0;
}
