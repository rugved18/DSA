#include <bits/stdc++.h>
using namespace std;

void armStrong(int n) {
    int original = n;
    int sum = 0;

    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, count);
        temp /= 10;
    }

    if (original == sum) {
        cout << "The number " << original << " is an Armstrong number" << endl;
    } else {
        cout << "The number " << original << " is not an Armstrong number" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    armStrong(n);
}
