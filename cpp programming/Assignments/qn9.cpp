#include <iostream>
using namespace std;

class Arithmetic {
   private:
      int num1, num2;

   public:
      Arithmetic(int n1, int n2) {
         num1 = n1;
         num2 = n2;
      }

      int add() {
         return num1 + num2;
      }

      int subtract() {
         return num1 - num2;
      }

      int multiply() {
         return num1 * num2;
      }

      int divide() {
         if (num2 == 0) {
            cout << "Division by zero error!" << endl;
            return -1;
         }
         else {
            return num1 / num2;
         }
      }
};

int main() {
   int a, b;
   cout << "Enter two integers: ";
   cin >> a >> b;

   Arithmetic obj(a, b);

   cout << "Sum: " << obj.add() << endl;
   cout << "Difference: " << obj.subtract() << endl;
   cout << "Product: " << obj.multiply() << endl;
   cout << "Quotient: " << obj.divide() << endl;

   return 0;
}
