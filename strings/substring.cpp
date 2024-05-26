// longest substring without repeating char
// using sliding window and two pointer 

#include<bits/stdc++.h>
using namespace std;

int thestring(string s){
    vector <int> mpp(256, -1);
    int l=0;
    int r =0;
    int maxlen = 0;

    while(r<s.length()){
        if(mpp[s[r]] != -1){
                l = max(mpp[s[r]] +1,l);
        }
         mpp[s[r]] = r;
         int len = r -l+1;
        maxlen = max(len, maxlen);
       
        r++;
    }
    return maxlen;
}


int main(){
  string s ="abcabcbb";
  cout<<thestring(s);
  return 0;
}