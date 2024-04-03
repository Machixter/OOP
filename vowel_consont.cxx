#include <iostream>
#include <cctype> 
// Include cctype library for tolower function

// Function to check if a character is a vowel
bool isVowel(char ch) {
    // Convert character to lowercase to make the function case-insensitive
    ch = std::tolower(ch);

    // Check if the character is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char character;

    // Ask the user for a character
    std::cout << "Enter a character to check if it's a vowel or consonant: ";
    std::cin >> character;

    // Check if the input is an alphabet letter
    if (std::isalpha(character)) {
        // Call the isVowel function and output the result
        if (isVowel(character)) {
            std::cout << character << " is a vowel." << std::endl;
        } else {
            std::cout << character << " is a consonant." << std::endl;
        }
    } else {
        std::cout << character << " is not an alphabet letter." << std::endl;
    }

    return 0;
}
