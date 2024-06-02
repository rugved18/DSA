// square of a number

#include<bits/stdc++.h>
using namespace std;


int square(int n){
       
       int sq =n*n;
       return sq;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    cout<<square(n);
}
