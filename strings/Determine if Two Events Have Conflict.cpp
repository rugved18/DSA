#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int convert(string s, int i) {
        return (s[i] - '0') * 10 + (s[i + 1] - '0');
    }

    bool haveConflict(vector<string>& e1, vector<string>& e2) {
        int h1 = convert(e1[0], 0);
        int h2 = convert(e1[1], 0);
        int m1 = convert(e1[0], 3);
        int m2 = convert(e1[1], 3);
        int h3 = convert(e2[0], 0);
        int h4 = convert(e2[1], 0);
        int m3 = convert(e2[0], 3);
        int m4 = convert(e2[1], 3);
        
        int t1 = h1 * 60 + m1;
        int t2 = h2 * 60 + m2;
        int t3 = h3 * 60 + m3;
        int t4 = h4 * 60 + m4;

        // Check if event1 and event2 overlap
        if (t1 <= t4 && t3 <= t2) {
            return true;
        }
        
        return false;
    }
};

int main() {
    Solution sol;
    vector<string> event1 = {"10:00", "11:00"};
    vector<string> event2 = {"14:00", "15:00"};
    
    if (sol.haveConflict(event1, event2)) {
        cout << "The events conflict." << endl;
    } else {
        cout << "The events do not conflict." << endl;
    }

    return 0;
}
