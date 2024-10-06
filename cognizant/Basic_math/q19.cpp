#include<bits/stdc++.h>
using namespace std;

int checkLeapYear(int n){

    if((n%4 == 0 && n%100 != 0 )|| n%400 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    cout << checkLeapYear(n) << endl;
}