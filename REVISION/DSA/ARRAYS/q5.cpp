#include<bits/stdc++.h>
using namespace std;

vector<int> check(vector<int> arr, int n){
    int left =0;
    int right = n-1;
    while(left < right){
    if(arr[left] < 0){
        left++;
    }else if(arr[right] >= 0){
        right--;
    }
    else{
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    }
    return arr;
}      

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        }
        vector<int> ans = check(arr,n);
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
            }
            return 0;


}