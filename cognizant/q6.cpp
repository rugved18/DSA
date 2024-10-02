#include<bits/stdc++.h>
using namespace std;

vector<int> sorted(vector<int> arr1,int n,vector<int> arr2, int m){
    vector<int> ans;
    int i=0;
    int j=0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            ans.push_back(arr1[i++]); // Add arr1[i] and increment i
        } else {
            ans.push_back(arr2[j++]); // Add arr2[j] and increment j
        }
    }

   
    while (i < n) {
        ans.push_back(arr1[i++]);
    }

   
    while (j < m) {
        ans.push_back(arr2[j++]);
    }
    return ans;


}

int main(){

    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> result;

    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

   result= sorted(arr1,n,arr2,m);
  
  for(int x : result){
    cout<<x<<" ";
  }
}