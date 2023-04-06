#include <iostream.h>
using namespace std;

int main() {
   int num1, num2;
   cout << "Enter two integers: ";
   cin >> num1 >> num2;
   cout << "Sum: " << num1 + num2 << endl;
   cout << "Difference: " << num1 - num2 << endl;
   cout << "Product: " << num1 * num2 << endl;
   if (num2 != 0) {
       cout << "Division: " << (double) num1 / num2 << endl;
   } else {
       cout << "Division: Undefined" << endl;
   }
   if (num1 > num2) {
       cout << num1 << " is greater than " << num2 << endl;
   } else if (num1 < num2) {
       cout << num1 << " is smaller than " << num2 << endl;
   } else {
       cout << num1 << " and " << num2 << " are equal" << endl;
   }
   return 0;
}
