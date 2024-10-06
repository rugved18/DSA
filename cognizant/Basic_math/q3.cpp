#include<bits/stdc++.h>
using namespace std;

void string_palindrome(string st)  {
    string res = st;
    int s=0;
    int e = st.length()-1;

    while(s<e){
        swap(st[s++],st[e--]);
    }
    if(st==res){
        cout<<"The string is a palindrome"<<endl;
    }else{
        cout<<"not"<<endl;
    }
}

int main(){
    string s;
    cin>>s;

    string_palindrome(s);
    return 0;

}