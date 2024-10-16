#include<bits/stdc++.h>
using namespace std;

void check(int n){
    int t1=0;
    int t2=1;
    int t3=0;
    cout<<t1<<" ";
    cout<<t2<<" ";
    for(int i=2;i<n;i++){
        t3=t1+t2;
        t1 = t2;
        t2 = t3;
        cout<<t3<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    check(n);
    return 0;
}