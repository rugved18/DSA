#include<bits/stdc++.h>
using namespace std;

int question4(vector<int> arr){
    int sum =0;
    int max_num = INT_MIN;
    for(int i=0;i<arr.size();i++){
        sum = sum+arr[i];
        if(sum> max_num){
            max_num = sum;
        }
        if(sum <0){
        sum =0;
    }
    }
    return max_num;
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<question4(arr)<<endl;
            

}