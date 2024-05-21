//cover the water 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string name;
        cin>>name;

        int cnt=0;
        int ans=0;

        bool isthere =false;

        for(char ch : name){
            if(ch == '.'){
                cnt++;
                ans++;
            }
            else{
                cnt=0;
            }

            if(cnt == 3){
                isthere =true;
                break;
            }
           
        }
         if(isthere){
        cout<<2;
          }
         else{
        cout<<ans;
          }
    }

   
}