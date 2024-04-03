#include <iostream>
using namespace std;

// Function to calculate HRA
double calculateHRA(double basic) {
    if (basic <= 4000) return basic * 0.10;
    else if (basic <= 8000) return basic * 0.20;
    else if (basic <= 12000) return basic * 0.25;
    else return basic * 0.30;
}

// Function to calculate DA
double calculateDA(double basic) {
    if (basic <= 4000) return basic * 0.50;
    else if (basic <= 8000) return basic * 0.60;
    else if (basic <= 12000) return basic * 0.70;
    else return basic * 0.80;
}

int main() {
    double basic, hra, da, grossSalary;

    // Input the basic salary from the user
    cout << "Enter the basic salary of the employee: ";
    cin >> basic;

    // Calculate HRA and DA
    hra = calculateHRA(basic);
    da = calculateDA(basic);

    // Calculate gross salary
    grossSalary = basic + hra + da;

    // Display the gross salary
    cout << "Gross Salary of the employee is: " << grossSalary << endl;

    return 0;
}
