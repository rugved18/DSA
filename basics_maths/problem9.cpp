// Function to calculate power of a number recursively
#include <iostream>
using namespace std;


double power(double base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: compute power recursively
    else {
        // If exponent is negative, calculate reciprocal
        if (exponent < 0) {
            base = 1 / base;
            exponent = -exponent;
        }
        double result = power(base, exponent / 2);
        // If exponent is even
        if (exponent % 2 == 0) {
            return result * result;
        }
        // If exponent is odd
        else {
            return base * result * result;
        }
    }
}

int main() {
    double base;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << "Result: " << result << endl;

    return 0;
}
