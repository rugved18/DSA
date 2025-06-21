// Function to find the maximum sum in a subarray
int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN; // To store the maximum sum
    int currentSum = 0;   // To track the current subarray sum

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        
        // Update maxSum if the currentSum is greater
        maxSum = max(maxSum, currentSum);
        
        // If currentSum becomes negative, reset it to 0
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    
    return maxSum;
}
