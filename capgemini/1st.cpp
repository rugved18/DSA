#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    string storhash;
    string storechar;

    for(int i=0;i<s.length();i++){
        if(s[i] == '#'){
            storhash.push_back(s[i]);
        }else{
            storechar.push_back(s[i]);
        }
    }
    string res = storhash + storechar;
    cout<<res;
    return 0;
}