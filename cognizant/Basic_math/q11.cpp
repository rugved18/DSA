#include<bits/stdc++.h>
using namespace std;

int sumof(int n){

    int sum=0;
    while(n>0){
        int lastDigit = n%10;
        n=n/10;
        sum = sum + lastDigit;
    }
    return sum;

    
}

int main(){
    int n;
    cin >> n;

    cout<<sumof(n);
}