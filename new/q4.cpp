#include<bits/stdc++.h>
using namespace std;

string check(string s1, string s2){
    string s3;
    int i =0;
    int j=0;

    while(i != s1.size() || j != s2.size()){
        s3.push_back(s1[i]);
        s3.push_back(s2[j]);
        i++;
        j++;
    }

    
    return s3;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << check(s1,s2);
    return 0;

}