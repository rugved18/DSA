//  number is prefect square or not 

#include<bits/stdc++.h>
using namespace std;

void square(int n){
     
     int sroot = sqrt(n);

     if(sroot* sroot == n){
        cout<<"true";
     }
     else{

     cout<<"false";
     }
     
}

int  perfectsquare(int n){
    for (int i=0;i<n/2;i++){
        if(i*i == n){
            return 1;
        }
    }
   return  0;

}

int main(){
    int n;
    cin>>n;

    // square(n);
    cout<<perfectsquare(n)<<endl;
    

}