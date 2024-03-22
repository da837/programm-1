

#include <iostream>
using namespace std;

// Function to swap the values of two integers
void swapIntegers(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2;
    
    cout << "Enter the first integer: ";
    cin >> num1;
    
    cout << "Enter the second integer: ";
    cin >> num2;
    
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    // Call the swap function
    swapIntegers(num1, num2);
    
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}
