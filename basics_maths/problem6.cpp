

#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD) using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM) using the GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
