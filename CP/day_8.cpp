#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int cnt =1;
        int ans =1;

        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1] )<=k){
                cnt++;
            }
            else{
                cnt=1;
            }
            ans =max(ans,cnt);
        }
        cout<<n-ans<<endl;
    }
    return 0;
}