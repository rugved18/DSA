// find the largest element in the array
#include<bits/stdc++.h>
using namespace std;

int check(vector<int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1, 5, 8 , 10};
    cout << check(arr) << endl;
    return 0;

}