#include<bits/stdc++.h>
using namespace std;

int prime(int n){

    if(n <=1){
        return 1;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return 0;
        }
    }
            return 1;

}

int main(){

    cout<<prime(10);

}


