//Find the first non-repeating character in a string.
char firstNonRepeatingCharacter(string str) {
    unordered_map<char, int> freq;

    // Count the frequency of each character.
    for (char c : str) {
        freq[c]++;
    }

    // Find the first character with a frequency of 1.
    for (char c : str) {
        if (freq[c] == 1) {
            return c;
        }
    }

    // If no non-repeating character is found, return '\0'.
    return '\0';
}
