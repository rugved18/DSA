#include<bits/stdc++.h>
using namespace std;

int max_sum_subArray(vector<int> arr,int n){
    int sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < n; i++){
         sum = sum + arr[i];
        if(sum > max_sum){
            max_sum = sum;
        }
        if(sum < 0){
            sum =0;
        }
     }
  return max_sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_sum_subArray(arr,n);
}