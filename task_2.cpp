#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the intermediate value "i"
double calculate_i(double x) {
    return 2 * sin(fabs(2 * x)) * cos(2 * x) - 11.6 * sin(x / 0.4 - 1);
}

// Function to calculate "F_{i+n}(x)"
double calculate_F(double i, double x, int n) {
    return i + n;
}

int main() {
    char work_type;
    double x, i, F, salary, tax_rate, tax_amount, net_salary;

    // Input
    cout << "Enter the type of work (A, B, C): ";
    cin >> work_type;
    cout << "Enter the value of x: ";
    cin >> x;

    // Calculate intermediate value "i"
    i = calculate_i(x);

    // Full if-else structure
    if (work_type == 'A') {
        F = calculate_F(i, x, 3);
        salary = 100 * fabs(F + 50);
        tax_rate = 0.1;
    } else if (work_type == 'B') {
        F = calculate_F(i, x, 4);
        salary = 150 * fabs(F + 100);
        tax_rate = 0.15;
    } else if (work_type == 'C') {
        F = calculate_F(i, x, 5);
        salary = 100 * fabs(F + 135);
        tax_rate = 0.2;
    } else {
        cout << "Invalid work type entered!" << endl;
        return 1;
    }

    // Calculate tax and net salary
    tax_amount = salary * tax_rate;
    net_salary = salary - tax_amount;

    // Output
    cout << fixed << setprecision(2);
    cout << "Salary: " << salary << endl;
    cout << "Tax amount: " << tax_amount << endl;
    cout << "Net salary: " << net_salary << endl;

    // Short if structure
    tax_rate = (work_type == 'A') ? 0.1 : (work_type == 'B') ? 0.15 : 0.2;

    return 0;
}


