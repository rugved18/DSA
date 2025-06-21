//Find the longest consecutive subsequence in an array.
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        // Check if 'num' is the start of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            // Count the streak
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            // Update the longest streak
            longest = max(longest, currentStreak);
        }
    }

    return longest;
}
