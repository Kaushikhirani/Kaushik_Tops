#include <iostream>

using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    void setPrivateVar(int value) {
        privateVar = value;
    }

    int getPrivateVar() {
        return privateVar;
    }

    void setProtectedVar(int value) {
        protectedVar = value;
    }

    int getProtectedVar() {
        return protectedVar;
    }
};

class Derived : public Base {
public:
    void setValues(int privateVal, int protectedVal, int publicVal) {
        // Accessing private member indirectly via public member function
        setPrivateVar(privateVal);
        // Accessing protected member directly
        protectedVar = protectedVal;
        // Accessing public member directly
        publicVar = publicVal;
    }

    void displayValues()
	 {
       
        cout << "PrivateVar (indirect access): " << getPrivateVar() << endl;
        
        cout << "ProtectedVar (direct access): " << protectedVar << endl;
       
        cout << "PublicVar (direct access): " << publicVar << endl;
    }
};

int main() {
    Derived derivedObj;

   
    derivedObj.publicVar = 10;
    
    derivedObj.setProtectedVar(20);
  
    derivedObj.setValues(30, 40, 50);
    derivedObj.displayValues();

    return 0;
}
