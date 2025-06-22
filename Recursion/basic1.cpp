#include<bits/stdc++.h>

using namespace std;

void recur(int n){
    if(n ==0){
        return;
    }
    cout<<n;
    cout<<endl;
    recur(n-1);
}

int main(){
    int n=10;
    recur(n);
}