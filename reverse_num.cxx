#include <iostream>

int main() {
    int num, reverse = 0, remainder;

    // Prompt user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Loop to reverse the number
    while(num != 0) {
        remainder = num % 10; // Get the last digit
        reverse = reverse * 10 + remainder; // Append it to the reverse number
        num /= 10; // Remove the last digit from the original number
    }

    // Output the reversed number
    std::cout << "Reversed Number: " << reverse << std::endl;

    return 0;
}

