#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }

        unordered_map<int,int> stt;
          
          for(auto it : arr){
            stt[it]++;
          }

          if(stt.size() == 1){
            cout<<"YES";
          }
          else if(stt.size() == 2){
            auto it = stt.begin();

            int cnt1 =it->second;
            it++;
            int cnt2 =it->second;

            int temp =abs(cnt1-cnt2);

            if(temp<=1){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
          }
          else{
        cout<<"NO";
    }
    
    }
}