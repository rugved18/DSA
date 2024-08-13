#include <bits/stdc++.h>
using namespace std;

bool halvesAreAlike(string s) {
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int left = 0;
    int right = s.length() - 1;
    int vowel_count = 0;

    while (left < right) {
        if (vowels.count(s[left])) {
            vowel_count++;
        }
        if (vowels.count(s[right])) {
            vowel_count--;
        }
        left++;
        right--;
    }

    return vowel_count == 0;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    if (halvesAreAlike(s)) {
        cout << "The two halves of the string are alike." << endl;
    } else {
        cout << "The two halves of the string are not alike." << endl;
    }

    return 0;
}
