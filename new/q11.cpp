#include<bits/stdc++.h>
using namespace std;

int check(int n){
    if(n <= 0){
        return 1;
    }else{
    return n * check(n-1);
    }
}
int main(){
    int n = 10;
    cout << check(n) << endl;
    return 0;
}