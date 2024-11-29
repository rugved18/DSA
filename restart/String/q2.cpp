//Check if two strings are anagrams of each other.
bool areAnagrams(string str1, string str2) {
    // If lengths are different, they cannot be anagrams.
    if (str1.length() != str2.length()) return false;

    // Sort both strings and compare.
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}
