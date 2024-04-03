#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Generate a random list of 20 integers
    int numbers[20];
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        numbers[i] = rand() % 100;
    }
    
    // Find the largest number in the list
    int largest = numbers[0];
    for (int i = 1; i < 20; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    
    // Print the largest number
    std::cout << "The largest number is: " << largest << std::endl;
    
    return 0;
}