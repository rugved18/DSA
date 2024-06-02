 #include<bits/stdc++.h>
 using namespace std;


    int longestOnes(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=0,maxlength=0,count=0;
        while(r<n){
            if(arr[r]==0){
                count++;
            }
            if(count>k){
                if(arr[l]==0) count--;
                l++;
               
            }
          
                int length=r-l+1;
                maxlength=max(maxlength,length);
                r++;
            
        }
        return maxlength;
        
    }
int main(){
    int k=2;
    vector<int> arr={1,1,1,0,0,0,1,1,1,1,0};
    
   cout<<longestOnes(arr,k);

    return 0;
}