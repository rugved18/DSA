// Find the missing number in an array of 1 to N.
#include<bits/stdc++.h>
using namespace std;

int check(vector<int> arr, int n){
    int sum = 0;
    int correct_sum = n*(n+1)/2;
   for(int i=0;i<n-1;i++){
     sum += arr[i];
   }
   return correct_sum - sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        }
        cout<<check(arr,n);
}