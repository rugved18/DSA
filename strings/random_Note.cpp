#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charCount[26] = {0};
        
        for(char c : magazine) {
            charCount[c - 'a']++;
        }
        
        for(char c : ransomNote) {
            if(charCount[c - 'a'] == 0) {
                return false;
            }
            charCount[c - 'a']--;
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    
    string ransomNote = "aabaa";
    string magazine = "baa";
    bool result = solution.canConstruct(ransomNote, magazine);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
