/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    // Handle negative numbers by taking absolute value
    number = abs(number);

    while (number > 0) {
        sum += number % 10; 
        number /= 10;       // Remove the last digit from number
    }

    return sum;
}

int main() {
    int number;
   cout << "Enter a number: ";
    cin >> number;

    int sum = sumOfDigits(number);
    cout << "Sum of digits of " << number << " is: " << sum << endl;

    return 0;
}