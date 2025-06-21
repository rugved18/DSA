//Check if a string is a palindrome.
int isPalindrome(string str) {
    int left = 0, right = str.length() - 1;

    // Compare characters from both ends
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Palindrome
}
