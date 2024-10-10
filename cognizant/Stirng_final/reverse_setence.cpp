#include<bits/stdc++.h>
using namespace std;

void reverse_sen(string s){
    stack<string> st;
    int i=0;
    

    for(int i=0;i<s.length();i++){
        string word ="";
    while(s[i] != ' ' && i<s.length()){
        word = word+s[i];
        i++;
    }
    st.push(word);
    }
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}cout<<endl;
    
}

int main(){
    string st ="how are you";

    reverse_sen(st);


}