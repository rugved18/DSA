// haloumi box
#include<bits/stdc++.h>
using namespace std;

bool solve(vector <int> a, int k){
    if(k ==1){
    vector<int> copy =a;
    sort(copy.begin(),copy.end());
    for(int i=0;i<a.size();i++){
        if(copy[i] != a[i]){
           return false;
        }
    }
    }
    return true;
}

int main(){
    int t;
    cin>>t;

     for(int j=0;j<t;j++){
      int n,k;
     cin>>n>>k;

     vector<int> a;

     for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a.push_back(num);
     }

     if(solve(a,k)){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
     }
    


}