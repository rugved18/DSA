#include<bits/stdc++.h>
using namespace std;

int powerOf(int n){
    int ans = 1;
    while(n > 0){
        ans=ans* 2;
        n--;
        }
        return ans;
}

int main(){
    int n;
    cin >> n;
    cout << powerOf(n) << endl;
}