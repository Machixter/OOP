#include <iostream>

// Function to calculate the sum of natural numbers up to a given limit
int sumOfNaturalNumbers(int limit) {
    int sum = 0;
    for (int i = 1; i <= limit; ++i) {
        sum += i; // Add each number to the sum
    }
    return sum;
}

int main() {
    int limit;

    // Ask the user for the upper limit
    std::cout << "Enter the upper limit to calculate the sum of natural numbers: ";
    std::cin >> limit;

    // Calculate and display the sum
    std::cout << "The sum of natural numbers up to " << limit << " is: " << sumOfNaturalNumbers(limit) << std::endl;

    return 0;
}
