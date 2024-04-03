#include <iostream>
#include <cmath>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    originalNum = num;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Check if the number is an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Output the result
    if ((int)result == num)
        std::cout << num << " is an Armstrong number.";
    else
        std::cout << num << " is not an Armstrong number.";

    return 0;
}
