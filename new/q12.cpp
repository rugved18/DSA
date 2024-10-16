#include<bits/stdc++.h>
using namespace std;

int check(string s){
    int n = s.size();
    string store ="";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for (char c : s) {
        if (c != ' ') {
            store.push_back(c);
        }
    }

    int i=0,j=store.size()-1;
    while(i<j){
        if(store[i] != store[j]){
            return 0;
            }
            i++;
            j--;
    }
    return 1;
}

int main(){
    string s;
    getline(cin, s);  // To read the entire string including spaces
    cout << check(s) << endl;  // Outputs 1 if palindrome, 0 otherwise
    return 0;
}