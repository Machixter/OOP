#include <iostream>

int main() {
    int num1, num2, num3;

    // Ask the user to enter three numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Assume the first number is the largest
    int largest = num1;

    // Compare with the second number
    if (num2 > largest) {
        largest = num2;
    }

    // Compare with the third number
    if (num3 > largest) {
        largest = num3;
    }

    // Output the largest number
    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}
