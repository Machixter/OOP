#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    // Handle edge cases: if the number is less than 2, it's not prime
    if (num < 2) return false;

    // Only need to check for divisors up to the square root of num
    // Using std::pow to calculate the square root
    int limit = std::pow(num, 0.5);
    for (int i = 2; i <= limit; ++i) {
        // If num is divisible by i, then it's not prime
        if (num % i == 0) return false;
    }
    // If no divisors are found, num is prime
    return true;
}

int main() {
    int number;
    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> number;

    // Call the isPrime function and output the result
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
