#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();

        // Loop from the end of the string to the beginning
        for (int i = n - 1; i >= 0; i--) {
            // Check if the current digit is odd
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start to the current digit
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};

int main() {
    Solution solution;

    // Example 1
    string num1 = "4206";
    string result1 = solution.largestOddNumber(num1);
    cout << "Largest odd number in \"" << num1 << "\" is \"" << result1 << "\"" << endl;

    // Example 2
    string num2 = "35427";
    string result2 = solution.largestOddNumber(num2);
    cout << "Largest odd number in \"" << num2 << "\" is \"" << result2 << "\"" << endl;

    // Example 3
    string num3 = "24680";
    string result3 = solution.largestOddNumber(num3);
    cout << "Largest odd number in \"" << num3 << "\" is \"" << result3 << "\"" << endl;

    return 0;
}
