#include<bits/stdc++.h>
using namespace std;

int question4(vector<int> arr){
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
}

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        }
        cout << question4(arr) << endl;
        return 0;

}