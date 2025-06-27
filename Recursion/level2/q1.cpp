#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int index, int n){
    if(n ==0){
        return;
    }
    cout<<arr[index]<<" ";
    fun(arr,index+1,n-1);
}

int main(){
   int n=5;
   int arr[5] ={1,2,3,4,5};
   fun(arr,0,n);

}