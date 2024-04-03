#include <iostream>
#include <string>
#include <algorithm>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    // Create a copy of the string and remove non-alphanumeric characters
    std::string cleanedStr = str;
    cleanedStr.erase(std::remove_if(cleanedStr.begin(), cleanedStr.end(), 
                                     { return !std::isalnum(c); }), cleanedStr.end());

    // Convert all characters to lowercase for case-insensitive comparison
    std::transform(cleanedStr.begin(), cleanedStr.end(), cleanedStr.begin(), 
                   { return std::tolower(c); });

    // Check if the cleaned string is equal to its reverse
    return std::equal(cleanedStr.begin(), cleanedStr.end(), cleanedStr.rbegin());
}

int main() {
    std::string inputStr;

    // Ask the user for the string
    std::cout << "Enter a string to check if it's a palindrome: ";
    std::getline(std::cin, inputStr);

    // Call the isPalindrome function and output the result
    if (isPalindrome(inputStr)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
