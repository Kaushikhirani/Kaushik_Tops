#include <iostream>

using namespace std;

class GrandParent {
public:
    GrandParent() {
        cout << "Constructor of GrandParent class called" << endl;
    }
};

class Parent : public GrandParent {
public:
    Parent() {
        cout << "Constructor of Parent class called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Constructor of Child class called" << endl;
    }
};

int main() {
    Child childObj;
    return 0;
}
