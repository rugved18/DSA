int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2; // Sum of numbers from 1 to N
    int arraySum = 0;

    // Calculate the sum of the array
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    // Missing number is the difference
    return totalSum - arraySum;
}
