//Find the equilibrium index of an array.
int equilibrium(int arr[], int n) {
    int sum = 0;      // Total sum of the array
    int leftsum = 0;  // Sum of elements to the left of the current index

    // Calculate the total sum of the array
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Traverse the array to find the equilibrium index
    for (int i = 0; i < n; ++i) {
        sum -= arr[i];  // Right sum is total sum minus the current element

        if (leftsum == sum) {
            return i;  // Equilibrium index found
        }

        leftsum += arr[i];  // Update the left sum
    }

    return -1;  // No equilibrium index found
}
