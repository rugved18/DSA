// remove duplicate(using Set data structure)
#include<bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string s) {
        unordered_set<char> stt;
        string result = "";
      int i=0;
      for(char c: s){
        if(stt.find(c) == stt.end()){
            stt.insert(c);
            result = result +c;
        }
      }
        return result;
    }

int main(){
     
     string s = "abbccadefde";

     cout<<removeDuplicateLetters(s);

     return 0;
}