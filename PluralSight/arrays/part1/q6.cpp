#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> question6(vector<vector<int>> matrix) {
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = 
      {{1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}};
    
    vector<vector<int>> ans = question6(matrix);
    
    for(auto row : ans) {
        for(auto num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
