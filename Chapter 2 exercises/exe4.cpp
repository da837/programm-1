#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double a, b, c, root1, root2, discriminant;

   cout << "Enter coefficients a, b, and c: ";
   cin >> a >> b >> c;

   discriminant = b * b - 4 * a * c;  // calculate discriminant

   if (discriminant > 0) {  // if roots are real and different
       root1 = (-b + sqrt(discriminant)) / (2 * a);
       root2 = (-b - sqrt(discriminant)) / (2 * a);
       cout << "The roots are real and different." << endl;
       cout << "Root 1 = " << root1 << endl;
       cout << "Root 2 = " << root2 << endl;
   } else if (discriminant == 0) {  // if roots are real and equal
       root1 = -b / (2 * a);
       cout << "The roots are real and equal." << endl;
       cout << "Root 1 = Root 2 = " << root1 << endl;
   } else {  // if roots are complex
       double realPart = -b / (2 * a);
       double imagPart = sqrt(-discriminant) / (2 * a);
       cout << "The roots are complex and different." << endl;
       cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
       cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
   }

   return 0;
}
