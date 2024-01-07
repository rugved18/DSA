// https://leetcode.com/problems/assign-cookies/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g), end(g));
        sort(begin(s), end(s));

       int m=g.size();
      int  n=s.size();

       int  i=0;
       int  j=0;
        while(i<m && j<n){
            if(s[j]>=g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};