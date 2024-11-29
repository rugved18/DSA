//Find the subarray with the given sum (non-negative numbers).
vector<int> findSubarrayWithSum(vector<int>& arr, int target) {
    int left = 0, right = 0, currentSum = 0;
    int n = arr.size();

    while (right < n) {
        // Expand the window by adding the right element
        currentSum += arr[right];

        // Shrink the window until currentSum <= target
        while (currentSum > target && left <= right) {
            currentSum -= arr[left];
            left++;
        }

        // Check if we found the target sum
        if (currentSum == target) {
            return {left, right}; // Return 0-based indices
        }

        // Move the right pointer to expand the window
        right++;
    }

    // If no subarray is found
    return {-1};
}
