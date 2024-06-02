// swap two number without 3rd variable

#include <bits/stdc++.h>
using namespace std;

void swapArithmetic(int& a, int& b) {
    a = a + b;  
    b = a - b;  
    a = a - b;  
}

void swapXOR(int& a, int& b) {
    a = a ^ b;  // Step 1: a becomes a XOR b
    b = a ^ b;  // Step 2: b becomes (a XOR b) XOR b = a
    a = a ^ b;  // Step 3: a becomes (a XOR b) XOR a = b
}


int main() {
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapArithmetic(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
