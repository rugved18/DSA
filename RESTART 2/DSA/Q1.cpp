#include<bits/stdc++.h>
using namespace std;

vector<int> missingNumbers(int n, vector<int> arr){
  unordered_set<int> Num(arr.begin(),arr.end());
  vector<int> missingnums;

  for(int i=1;i<n;i++){
    if(Num.find(i) == Num.end()){
      missingnums.push_back(i);
    }
  }
  return missingnums;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int> results = missingNumbers(n,arr);

  for(int i=0;i<results.size();i++){
    cout<<results[i];
  }
}
