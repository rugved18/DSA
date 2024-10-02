#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int t1=0,t2=1,nextNum = 0;
    cout<<t1<<" ";
    cout<<t2<<" ";

    for(int i=2;i<n;i++){

        nextNum = t1+t2;
        t1 = t2;
        t2 = nextNum;
        cout<<nextNum<<" ";
    }
}