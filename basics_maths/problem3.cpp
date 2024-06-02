// check if a number is even or not
#include<bits/stdc++.h>
using namespace std;


void evenorodd(int n){
   if(n<0){
    cout<<"nagitive number"<<endl;
   }
   else if(n%2 == 0){
    cout<<"even number"<<endl;
   }
   else{
    cout<<"odd number"<<endl;
   }
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    evenorodd(n);
}