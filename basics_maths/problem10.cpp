// armstrong number: a number that is equal to the sum of the cubes of its digits
#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int original =n;
    int last =0;
    int arm =0;
    
    while(n!=0){
        last =n%10;
            arm =arm+(last*last*last);
            n=n/10;
    }
    if(original == arm){
           cout<<"true";
    } 
    else{
        cout<<"false";
    }
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    armstrong(n);
}
