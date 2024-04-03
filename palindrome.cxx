#include <iostream>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num; // Store the original number
    int reversedNum = 0; // This will hold the reversed number

    // Reverse the number
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append it to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Check if the original number and the reversed number are the same
    return originalNum == reversedNum;
}

int main() {
    int number;

    // Ask the user for the number
    std::cout << "Enter a number to check if it's a palindrome: ";
    std::cin >> number;

    // Call the isPalindrome function and output the result
    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
