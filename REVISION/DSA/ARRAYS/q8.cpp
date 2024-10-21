#include<bits/stdc++.h>
using namespace std;

vector<int> check(vector<int> arr){
    int n = arr.size();
int i=0;
int temp =arr[i];

for(i=1;i<n;i++){
arr[i-1] = arr[i];
}
arr[n-1] = temp;

return arr;
}

#include<bits/stdc++.h>
using namespace std;

vector<int> check1(vector<int> arr, int k){
    int n = arr.size();

vector<int> temp(k);
for(int i=0;i<k;i++){
temp[i] = arr[i];
}

for(int i=k;i<n;i++){
arr[i-k] = arr[i];
}

for(int j=0;j<k;j++){
arr[n-k+j] = temp[j];
}



return arr;
}


int main(){
    int k=3;
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result = check1(arr,k);
    cout << "Resultant array is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
        }
        return 0;
}