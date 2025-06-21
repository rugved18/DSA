// Function to find two numbers that sum to the target
pair<int, int> findTwoSum(const vector<int>& arr, int target) {
    unordered_map<int, int> numIndex; // Map to store numbers and their indices

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i]; // Find the complement

        // Check if complement is already in the map
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, arr[i]}; // Return the pair
        }

        // Store the current number with its index
        numIndex[arr[i]] = i;
    }

    // Return an invalid pair if no solution is found
    return {-1, -1};
}
