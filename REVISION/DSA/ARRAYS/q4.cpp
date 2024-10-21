// Sort an array of 0s, 1s, and 2s (Dutch National Flag problem).
#include<bits/stdc++.h>
using namespace std;

vector<int> check(vector<int> arr){
    int low =0;
    int high = arr.size()-1;
    int mid = 0;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }else{
            mid++;
        }
    }
    return arr;
}
int main(){
    vector<int> arr = {0, 1, 2, 0, 1
    , 2};
    vector<int> result = check(arr);
    cout << "Sorted array is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
        }
        return 0;

}