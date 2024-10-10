#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    int col[n] = {0};
    int row[m] = {0};
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    for(int i=0;i<matrix[0].size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout << matrix[j][i] << " ";
    }cout<<endl;
    }

    matrix = setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:\n";
    for(int i=0;i<matrix[0].size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout << matrix[j][i] << " ";
    }cout<<endl;
    }

    return 0;
}
