#include<bits/stdc++.h>
using namespace std;


// vector<int> question1(vector<int> arr1,vector<int> arr2 ,int n,int m){
//     vector<int> arr;
//     int i=0,j=0;
//     while(i<arr1.size() && j<arr2.size()){
//             if(arr1[i] < arr2[j]){
//                 arr.push_back(arr1[i]);
//                 i++;
//             }else{
//                 arr.push_back(arr2[j]);
//                 j++;
//             }
//     }
//     while(i<arr1.size()){
//         arr.push_back(arr1[i]);
//         i++;
//     }
//     while(j<arr2.size()){
//         arr.push_back(arr2[j]);
//         j++;
//     }

//     return arr;

// }

void question6part2(vector<int>& arr1,vector<int>& arr2,int n,int m){
    int left = n-1;
    int right = 0;

    while(left >=0 && right<m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;  
        }else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    
}

int main(){
int n;
int m;
cin>>n;
cin>>m;
vector<int> arr1(n);
vector<int> arr2(m);
for(int i=0;i<n;i++){
cin>>arr1[i];
}

for(int j=0;j<m;j++){
cin>>arr2[j];
}

question6part2(arr1, arr2, n, m);

    // Output arr1
    for (int k = 0; k < n; k++) {
        cout << arr1[k] << " ";
    }
    
    // Output arr2
    for (int k = 0; k < m; k++) {
        cout << arr2[k] << " ";
    }

    return 0;
}