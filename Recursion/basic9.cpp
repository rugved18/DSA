#include<bits/stdc++.h>
using namespace std;

int fun(string s){

    int n = s.length();


    for(int i=0;i<n/2;i++){
         if(s[i] != s[n-1-i]){
             return 0;
         }   
    }
    return 1;
}

int rev(string str, int left, int right){
    if(left >= right) return 1;
    if(str[left] != str[right]) return 0;
    return rev(str, left+1,right-1);
}

int main(){
  cout<<fun("madam");
  string str = "ababa";

  cout<<endl;

  cout<<rev(str,0,str.length()-1);
}