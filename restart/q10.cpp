//Find the first repeating element in an array.
int firstRepeatingElement(const vector<int>& arr) {
    unordered_map<int, int> elementIndex; // Stores element and its first occurrence index

    for (int i = 0; i < arr.size(); i++) {
        // Check if element is already in the map
        if (elementIndex.find(arr[i]) != elementIndex.end()) {
            return arr[i]; // Found the first repeating element
        }
        // Otherwise, add the element to the map
        elementIndex[arr[i]] = i;
    }

    // If no repeating element is found
    return -1;
}
