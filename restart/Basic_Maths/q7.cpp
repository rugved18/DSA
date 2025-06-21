//Fibonacci Sequence
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
