// Function to move all negative numbers to one side
void moveNegatives(int arr[], int n) {
    int j = 0; // Pointer for negative placement

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // Swap negative numbers with the element at index 'j'
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
