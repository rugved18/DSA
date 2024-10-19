//reverse an array
#include<bits/stdc++.h>
using namespace std;
vector<int> check(vector<int> arr){
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return arr;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 10, 20, 1, 20
    };
    vector<int> result = check(arr);
    for(int i=0;i<arr.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}