//Fibonacci Sequence
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Sequence up to " << n << " terms:" << endl;
    //main logic
    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> terms;
    
    fibonacci(terms);

    return 0;
}
