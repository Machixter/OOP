#include <iostream> 
// Include the IO stream library for input and output operations.

int main() {
    double number; // Declare a variable to store the number.

    // Ask the user to enter a number.
    std::cout << "Enter a number: ";
    // Store the input number in the variable.
    std::cin >> number;

    // Check if the number is greater than zero.
    if (number > 0) {
        // If it is, print that the number is positive.
        std::cout << "The number is positive." << std::endl;
    } 
    // Check if the number is less than zero.
    else if (number < 0) {
        // If it is, print that the number is negative.
        std::cout << "The number is negative." << std::endl;
    } 
    // If the number is neither positive nor negative, it must be zero.
    else {
        // Print that the number is zero.
        std::cout << "The number is zero." << std::endl;
    }

    // End of the program.
    return 0;
}
