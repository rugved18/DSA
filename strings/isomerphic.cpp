#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) {
      return false; // Different lengths, not isomorphic
    }
    unordered_map<char, char> mpp;
    for (int i = 0; i < s.length(); i++) {
      if (!mpp.count(s[i])) {
        // Check if corresponding character in t already has a mapping
        if (mpp.count(t[i])) {
          return false;
        }
        // Add new mapping for both directions
        mpp[s[i]] = t[i];
        mpp[t[i]] = s[i];
      } else {
        // Verify consistent mapping for s[i]
        if (mpp[s[i]] != t[i]) {
          return false;
        }
      }
    }
    return true;
  }
};
