#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> arr, int n){
int total = (n+1)*(n+2)/2;

int sum=0;

for(int i=0;i<n;i++){
    sum+=arr[i];
}
return total-sum;


}

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<missing(arr,n);
}