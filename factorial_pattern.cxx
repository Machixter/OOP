#include <iostream>
using namespace std;

int main() {
    int n = 7; // Number of rows for the pattern

    // Loop to print each row of the pattern
    for(int i = n; i > 0; i--) {
        // Nested loop to print stars in each row
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}
