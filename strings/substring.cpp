// longest substring without repeating char
// using sliding window and two pointer

#include<bits/stdc++.h>
using namespace std;

int thestring(string s){
    vector <int> mpp(255, -1);
    int l=0;
    int r =0;
    int maxlen = 0;

    while(r<s.length()){
        if(mpp[s[r]] != -1){
            if(mpp[s[r]] > l){
                l = mpp[s[r]] +1;
            }
        }
         int len = r -l+1;
        maxlen = max(len, maxlen);
        mpp[s[r]] = 1;
        r++;
    }
    return maxlen;
}


int main(){
  string s ="absav";
  cout<<thestring(s);
  return 0;
}