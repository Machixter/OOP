#include <iostream>

int main() {
    // program to calculate the area of a rectangle
    // variable declaration
    // take input from users
    // checks if > 0 and length > width
    // performs calculation
    // prints result 
    int length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // confirm if inputs are valid
    if (length > 0 && width > 0 && length != width) {
        // calculate the area
        int area = length * width;

        // print the area
        std::cout << "The area of the rectangle is: " << area << std::endl;
    } else {
        std::cout << "Invalid input. Please make sure the length and width are positive and not equal." << std::endl;
    }

    return 0;
}