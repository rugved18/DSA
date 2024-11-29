//Find the maximum product of two integers in an array.
int maxProduct(vector<int>& nums) {
    // Initialize variables to find max1, max2, min1, min2
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int num : nums) {
        // Update max1 and max2
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }

    // Return the maximum of the two possible products
    return max1 * max2;
}
