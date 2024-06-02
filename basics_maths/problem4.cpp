// check if number is palindrom
#include<bits/stdc++.h>
using namespace std;
void isPalindrom(int n){
    int original =n;
         int result =0;
    while(n>0){
        int lastdigit =n%10;
        n=n/10;
         result =(result*10)+lastdigit;
    }
    if(result == original){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}

int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;
isPalindrom(n);
}