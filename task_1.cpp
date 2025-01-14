#include <iostream>
#include <cmath>

using namespace std;

//Task 1

double calculateY(double x, double a) {
    double y;
    if (x > 3.5) {
        y = sin(x) * log10(x); //  log10 for base-10 logarithm
    } else {
        y = pow(cos(a * x), 2); // Square of cos(ax)
    }
    return y;
}

int main() {
    double x, a = 0.9;

    cout << "Enter the value of x: ";
    cin >> x;

    double y = calculateY(x, a);

    cout << "The calculated value of y is: " << y << endl;

    return 0;
}

// Task 2