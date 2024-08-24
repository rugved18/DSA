#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to convert an Excel column title to a column number
    int titleToNumber(string columnTitle) {
        int result = 0;
        // Iterate over each character in the column title
        for (int i = 0; i < columnTitle.size(); i++) {
            // Shift the result by multiplying it by 26 (since there are 26 letters in the alphabet)
            result = result * 26;
            // Convert the current character to its corresponding value and add it to result
            // 'A' corresponds to 1, 'B' to 2, ..., 'Z' to 26
            result = result + (columnTitle[i] - 'A' + 1);
        }
        return result;  // Return the final computed column number
    }
};

int main() {
    Solution solution;

    // Test case 1: Single letter column "A"
    string columnTitle1 = "A";
    // Expected output: 1
    cout << "Column " << columnTitle1 << " -> " << solution.titleToNumber(columnTitle1) << endl;

    // Test case 2: Two-letter column "AB"
    string columnTitle2 = "AB";
    // Expected output: 28
    cout << "Column " << columnTitle2 << " -> " << solution.titleToNumber(columnTitle2) << endl;

    // Test case 3: Two-letter column "ZY"
    string columnTitle3 = "ZY";
    // Expected output: 701
    cout << "Column " << columnTitle3 << " -> " << solution.titleToNumber(columnTitle3) << endl;

    // Test case 4: Three-letter column "AAA"
    string columnTitle4 = "AAA";
    // Expected output: 703
    cout << "Column " << columnTitle4 << " -> " << solution.titleToNumber(columnTitle4) << endl;

    return 0;  // Indicate that the program ended successfully
}
