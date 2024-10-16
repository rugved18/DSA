#include<bits/stdc++.h>
using namespace std;

int check(vector<int> arr){
    int n = arr.size();
   long long sum =0;
   long long correct_sum =n *(n+1)/2;
   for(int i=0;i<n-1;i++){
      sum +=arr[i];
   }
   int result = correct_sum - sum;
   return result;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<check(arr)<<endl;
        return 0;
}