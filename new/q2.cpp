#include<bits/stdc++.h>
using namespace std;

int check(vector<int> arr,int k){
    int n = arr.size();
    vector<int> result;
    for(int i=0;i<n-k;i++){
        int mini=arr[i];
        for(int j=i;j<i+k-1; j++ )
        {
            mini= min(arr[j],mini);
        }
        result.push_back(mini);

    }
    sort(result.begin(),result.end());
    return result.back();
}

int main(){
int n;
int k;
cin>>n>>k;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    cout<<check(arr,k)<<endl;
    return 0;
}
}