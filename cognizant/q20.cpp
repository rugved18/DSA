#include<bits/stdc++.h>
using namespace std;

int ReverseNum(int n){

    int newNum = n;
    int rev=0;
    while(n>0){
        int lastDigit = n%10;
        n=n/10;
        rev =(rev*10)+lastDigit;

    }
    if(newNum == rev){
        return 1;
    }else{
        return 0;
    }

    
}

int main(){
    int n;
    cin >> n;

    cout<<ReverseNum(n);
}