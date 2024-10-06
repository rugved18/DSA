#include<bits/stdc++.h>
using namespace std;

int Second(vector<int> arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n-2];
}

int main(){
 
 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 cout<<Second(arr,n);
}