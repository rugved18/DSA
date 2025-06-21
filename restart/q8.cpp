// Helper function to reverse a portion of the array
void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array by K positions
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where K > n

    // Reverse the entire array
    reverseArray(arr, 0, n - 1);

    // Reverse the first K elements
    reverseArray(arr, 0, k - 1);

    // Reverse the remaining elements
    reverseArray(arr, k, n - 1);
}
