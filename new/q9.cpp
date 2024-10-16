#include<bits/stdc++.h>
using namespace std;

int check(vector<vector<int>> arr,int r, int c){
    int n = arr.size();
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i == j){
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int sum = check(arr, n, m);
    cout << sum << endl;
    return 0;
    
}