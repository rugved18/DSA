#include<bits/stdc++.h>
using namespace std;

void check_sorted(vector<int> arr){
     bool check_is= true;
    for(int i=0;i<arr.size()-1;i++){
       
        if(arr[i] > arr[i+1]){
            check_is = false;
            break;
        }
    }
    if(check_is){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
    
}

int main(){
   int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    check_sorted(arr);
}