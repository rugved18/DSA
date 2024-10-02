#include<bits/stdc++.h>
using namespace std;

int dupt(vector<int> ar,int n){
    for(int i = 0; i < n; i++){
        if(ar[i] == ar[i+1]){
            return ar[i];
        }
    }
    return 0;

}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<dupt(arr,n);
}