//Reverse a string.
string reverseString(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}
