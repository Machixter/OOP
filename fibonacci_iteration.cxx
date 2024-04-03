#include <iostream>

// Function to print Fibonacci series using iteration
void printFibonacciIterative(int terms) {
    int a = 0, b = 1, c;
    if (terms <= 0) return; // No terms to print

    std::cout << a; // Print the first term
    for (int i = 1; i < terms; ++i) {
        std::cout << ", " << b; // Print the next term
        c = a + b; // Calculate the next term
        a = b; // Update a to be the previous term
        b = c; // Update b to be the current term
    }
    std::cout << std::endl;
}

int main() {
    int terms;
    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> terms;

    printFibonacciIterative(terms); // Call the iterative function

    return 0;
}
