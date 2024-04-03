#include <iostream>
#define PI 3.14159
 // Define the value of PI

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius; 
    // Area formula: πr²
}

// Function to calculate the circumference of a circle
double calculateCircumference(double radius) {
    return 2 * PI * radius; 
    // Circumference formula: 2πr
}

int main() {
    double radius;

    // Ask the user for the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate and display the area
    std::cout << "The area of the circle is: " << calculateArea(radius) << std::endl;

    // Calculate and display the circumference
    std::cout << "The circumference of the circle is: " << calculateCircumference(radius) << std::endl;

    return 0;
}
