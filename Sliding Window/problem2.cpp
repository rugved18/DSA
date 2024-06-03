//Fruit into Baskets using sliding window and 2 pointer
// use map data structure and time complexity is o(n) 

#include<bits/stdc++.h>
using namespace std;
int findMaxFruits(vector<int> &arr, int n) {
    // Write your code here.
    int left =0;
    int right =0;
   int maxlen =0;
    unordered_map<int,int> mpp;
    int k=2;

    while(right<n){
        mpp[arr[right]]++;

      
            while(mpp.size()>k){
                mpp[arr[left]]--;
                if(mpp[arr[left]] == 0){
                    mpp.erase(arr[left]);
                }
                      left++;
            }
      


        int len =right-left+1;
        maxlen =max(maxlen,len);
        right++;
    }
    return maxlen;
}

int main(){
    int n=6;
    vector<int> arr={0, 1, 2, 2, 2, 2};
    cout<<findMaxFruits(arr,n);
    return 0;

}