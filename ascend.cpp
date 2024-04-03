#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

int main() {
    // Generate 20 random numbers
    std::vector<int> numbers(20);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);
    for (int i = 0; i < 20; i++) {
        numbers[i] = dis(gen);
    }

    // Sort the numbers in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted numbers
    for (int i = 0; i < 20; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}