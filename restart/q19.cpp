//Find the largest sum of a subarray of size K.
int maxSubarraySumOfSizeK(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) {
        cout << "Subarray size K is larger than the array size!" << endl;
        return -1;
    }

    int maxSum = 0, currentSum = 0;

    // Calculate the sum of the first window
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k]; // Add new element, remove old element
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
