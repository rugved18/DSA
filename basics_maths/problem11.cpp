// sum of digits of a number
#include<bits/stdc++.h>
using namespace std;


int sumofdigits(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans =ans+i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter ";
    cin>>n;
    cout<<sumofdigits(n);

}