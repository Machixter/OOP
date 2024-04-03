#include <iostream>

int main() {
    int length, width;
    char repeat;

    do {
        // Take input from users
        std::cout << "Enter the length: ";
        std::cin >> length;
        std::cout << "Enter the width: ";
        std::cin >> width;

        // Confirm if inputs are true and not same and length is larger than width
        if (length > 0 && width > 0 && length != width && length > width) {
            // Calculate the area of the rectangle
            int area = length * width;
            std::cout << "The area of the rectangle is: " << area << std::endl;
        } else {
            std::cout << "Invalid inputs. Please try again." << std::endl;
        }

        // Ask to repeat the task
        std::cout << "Do you want to calculate the area of another rectangle? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}