#include<bits/stdc++.h>
using namespace std;

int rev(int n,int revSoFar=0){
    if(n ==0){
        return revSoFar;
    }
    
    int lastDigit = n%10;

    revSoFar = revSoFar*10+lastDigit;
   return rev(n/10,revSoFar);
}

int main(){
 
    cout<<rev(1234);
}