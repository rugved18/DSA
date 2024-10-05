#include<bits/stdc++.h>
using namespace std;

int Binary_Search(vector<int> arr,int n,int k){
    int low =0;
    int high= n-1;

    while(low<high){
        int mid =(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }else if(k>arr[mid]){
            low = mid+1;
        }else{
            high=mid-1;
        }
    }
}

int main(){

    cout<<"enter num of elements";
    int n;
    cin >> n;

   

    vector<int> arr(n);

     cout<<"enter the array elements";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
     cout<<"enter the key elements";
    int k;
    cin >> k;

    cout<<Binary_Search(arr,n,k);
}