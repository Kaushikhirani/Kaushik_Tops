#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    string name;
    int age;
    double height;
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    Person person1, person2;
    person1.name = "Ajay";
    person1.age = 25;
    person1.height = 5.8;
    person2.name = "Jayesh";
    person2.age = 30;
    person2.height = 5.6;
    
    // write data to file
    ofstream outfile("example.txt");
    if(!outfile.is_open()) {
        cout << "Error: Failed to open file." << endl;
        return 1;
    }
    
    outfile.write(reinterpret_cast<char*>(&person1), sizeof(Person));
    outfile.write(reinterpret_cast<char*>(&person2), sizeof(Person));
    
    outfile.close();
    
    // read data from file
    ifstream infile("example.txt");
    if(!infile.is_open()) {
        cout << "Error: Failed to open file." << endl;
        return 1;
    }
    
    Person readPerson1, readPerson2;
    infile.read(reinterpret_cast<char*>(&readPerson1), sizeof(Person));
    infile.read(reinterpret_cast<char*>(&readPerson2), sizeof(Person));
    
    readPerson1.display();
    readPerson2.display();
    
    infile.close();
    
    return 0;
}
