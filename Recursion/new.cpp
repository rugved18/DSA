#include<bits/stdc++.h>
using namespace std;


void arrCheck(int arr[],int index, int n)
{
  if(index >= n) return ;
  cout<<arr[index]<<" ";
   arrCheck(arr,index+1, n);
}
int main(){

    int arr[5] ={1,2,3,4,5};
    int n = 5;
    arrCheck(arr,0,n);

}