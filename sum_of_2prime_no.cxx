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

// Function to check if a number can be expressed as a sum of two prime numbers
bool checkPrimeSum(int number) {
    for (int i = 2; i <= number / 2; i++) {
        // Check if 'i' and 'number-i' are prime
        if (isPrime(i) && isPrime(number - i)) {
            cout << number << " = " << i << " + " << (number - i) << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int number;
    
    // Input a number from user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number can be expressed as the sum of two prime numbers
    if (!checkPrimeSum(number)) {
        cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}
