#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n < 0) return 0; // Factorial is not defined for negative numbers

    unsigned long long fact = 1; // Initialize the factorial result as 1
    for (int i = 1; i <= n; ++i) {
        fact *= i; // Multiply fact by each number up to n
    }
    return fact; // Return the factorial
}

int main() {
    int number;

    // Ask the user for the number
    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> number;

    // Call the factorial function and output the result
    std::cout << "The factorial of " << number << " is: " << factorial(number) << std::endl;

    return 0;
}
