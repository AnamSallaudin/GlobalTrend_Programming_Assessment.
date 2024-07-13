/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int factorial(int n) {
    if (n < 0) {
        // Handle negative input (if needed)
        std::cerr << "Error: Factorial is not defined for negative numbers.\n";
        return 0;
    }

    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    int fact = factorial(number);
    std::cout << "Factorial of " << number << " is: " << fact << std::endl;

    return 0;
}
