#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print prime numbers between two intervals
void displayPrimes(int low, int high) {
    for (int i = low; i <= high; i++) {
        // If current number is prime, print it
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int low, high;
    
    // Input lower and higher interval from user
    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    // Ensuring that the lower interval is not less than 2
    low = max(low, 2);

    // Displaying prime numbers between the intervals
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    displayPrimes(low, high);

    return 0;
}
