//Check if a string is a valid shuffle of two other strings.
bool isValidShuffle(string str1, string str2, string shuffle) {
    // Check if the lengths match
    if (str1.length() + str2.length() != shuffle.length()) {
        return false;
    }

    int i = 0, j = 0, k = 0;

    // Traverse the shuffled string
    while (k < shuffle.length()) {
        if (i < str1.length() && shuffle[k] == str1[i]) {
            i++; // Match with str1
        } else if (j < str2.length() && shuffle[k] == str2[j]) {
            j++; // Match with str2
        } else {
            return false; // Character doesn't match with str1 or str2
        }
        k++;
    }

    // Ensure all characters from str1 and str2 are used
    return (i == str1.length() && j == str2.length());
}
