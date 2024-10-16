#include<bits/stdc++.h>
using namespace std;

pair<int,int> check(vector<int> arr,int k){
    int n = arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i] + arr[j] == k){
            return make_pair(i,j);
        }else if(arr[i]+ arr[j]< k){
            i++;
        }else{
            j--;
        }
    }
    return make_pair(-1, -1);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        // sort(arr.begin(),arr.end());
        pair<int,int> ans = check(arr,k);
        cout<<ans.first<<" "<<ans.second<<endl;
        return 0;
}