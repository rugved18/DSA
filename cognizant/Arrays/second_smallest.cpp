#include<bits/stdc++.h>
using namespace std;

int second_smallest(vector<int> arr){
    int small = INT_MAX;
    int second_small = INT_MAX;

    for(int i=0;i<arr.size();i++){
      if(arr[i]<small){
        second_small = small;
        small = arr[i];
    }else if(arr[i] > small && arr[i]< second_small){
        second_small = arr[i];
    }
    }
    return second_small;
}

int main(){
int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<second_smallest(arr)<<endl;
}