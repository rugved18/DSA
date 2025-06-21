//Find the longest substring without repeating characters.
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex; // Store the last index of each character
    int maxLength = 0;
    int start = 0; // Left pointer of the sliding window

    for (int end = 0; end < s.size(); end++) {
        char currentChar = s[end];

        // If currentChar is in the map and its index >= start, move start
        if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
            start = charIndex[currentChar] + 1;
        }

        // Update the last index of the current character
        charIndex[currentChar] = end;

        // Calculate max length of the current window
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}
