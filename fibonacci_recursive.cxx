#include <iostream>

// Function to print a single term in the Fibonacci series using recursion
int fibonacciRecursive(int n) {
    if (n <= 1) return n; // Base cases for the first two terms
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); // Recursive call
}

// Function to print the Fibonacci series up to n terms
void printFibonacciSeries(int terms) {
    for (int i = 0; i < terms; ++i) {
        std::cout << fibonacciRecursive(i) << (i < terms - 1 ? ", " : "\n");
    }
}

int main() {
    int terms;
    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> terms;

    printFibonacciSeries(terms); // Call the recursive function

    return 0;
}
