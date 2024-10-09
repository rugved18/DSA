#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int> arr){
    int max=arr[0];
    int second = INT_MIN;

    for(int i=1;i<arr.size();i++){
       if(arr[i]>max){
        second = max;
        max = arr[i];
       }else if(arr[i]<max && arr[i]>second){
        second = arr[i];
       }
    }
    return second;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<second_largest(arr)<<endl;

}