#include<bits/stdc++.h>
using namespace std;

int part1(int n, int r){
    long long res = 1;

    for(int i = 0; i < r; i++){
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

vector<vector<int>> finalPart(int n){
    vector<vector<int>> ans;

    for(int row = 1; row <= n; row++){
        vector<int> temp;
        for(int col = 1; col <= row; col++){
            temp.push_back(part1(row - 1, col - 1));
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> n;

    vector<vector<int>> result = finalPart(n);

    cout << "Pascal's Triangle:\n";
    for(const auto& row : result) {
        for(const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
