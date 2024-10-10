#include<bits/stdc++.h>
using namespace std;

vector<int> question5(vector<int> arr){
    int n = arr.size();
    int zeros =0;
    int ones =0;
    int twos =0;
    vector<int> results;

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zeros++;
        }else if(arr[i] == 1){
            ones++;
        }else{
            twos++;
        }
    }
    for(int i=0;i<zeros;i++){
        results.push_back(0);
    }
    for(int i=0;i<ones;i++){
        results.push_back(1);
    }
    for(int i=0;i<twos;i++){
        results.push_back(2);
    }

    return results;

}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        }
        vector<int> result = question5(arr);
        for(int i=0;i<result.size();i++){
            cout << result[i] << " ";
        }


}