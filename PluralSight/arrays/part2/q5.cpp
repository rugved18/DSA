#include<bits/stdc++.h>
using namespace std;

pair<int, int> question5(vector<int> arr){
    int n = arr.size();
    int repeat =-1;
    int missing = -1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            repeat = arr[i];
            break;
        }
    } 
  int sum_full  = n*(n+1)/2;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  missing = sum_full-(sum-repeat);
return {repeat,missing};
}

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        }
       pair<int, int> result = question5(arr);
    
    // Output the results
    cout << "Repeating: " << result.first << ", Missing: " << result.second << endl;
        return 0;
}