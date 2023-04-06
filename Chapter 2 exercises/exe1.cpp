#include <iostream.h>
using namespace std;
int main()
{
/* Exercise 1 from Chapter 2 Write a statement (or comment) to accomplish each of the following: */
/* a) State that a program calculates the product of three integers.*/
// Calculate the product of three integers
/* b) Define the variables x, y, z, and result to be of type int.*/
 int x, y, z, result;
/* c) Prompt the user to enter three integers.*/
cout << "Please enter three integers: ";
/* d) Read three integers from the keyboard and store them in the variables x, y, and z.*/
 cin >> x >> y >> z;
/* e) Compute the product of the three integers contained in variables x, y, and z, and assign the result to the variable result.*/
 result = x * y * z;
/* f) Print "The product is" followed by the value of the integer variable result. */
cout << "The product is " << result;
/* g) Return a value from main indicating that the program terminated successfully.*/
return 0;
}
