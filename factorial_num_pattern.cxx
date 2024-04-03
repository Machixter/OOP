#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Total number of rows in the pattern

    // Outer loop for each row
    for(int i = 1; i <= rows; i++) {
        // Inner loop for printing numbers in each row
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}
