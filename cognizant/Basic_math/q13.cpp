#include<bits/stdc++.h>
using namespace std;

int isPerfect(int n){
    int sum=0;

    for(int i=1;i<=n/2;i++){
        if(n%i== 0){
            sum=sum+i;
        }
    }

    return sum == n;
}

int main(){
    int n;
    cin >> n;
    cout << isPerfect(n) << endl;
}