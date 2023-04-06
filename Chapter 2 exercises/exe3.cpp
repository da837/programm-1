#include <iostream>
using namespace std;
int main()
{
double radius, circumference;

 const double PI = 3.14159;

// define constant value of pi cout << "Enter the radius of the circle: ";
cin >> radius;
circumference = 2 * PI * radius;

// calculate circumference
cout << "The circumference of the circle is: " << circumference << endl;
return 0;
}
