#include<bits/stdc++.h>
using namespace std;
int f(int n,int arr[])
{
   int cnt=0;
   for(int i=0;i<n;i++)
   {
          if(arr[i]==n)
          {
            cnt++;
          }
   }
   return cnt;
}
int main()
{
    int n;
    cout<<"enter the  number of element  ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter the number";
        cout<<arr[i]<<" ";
    }
    f(n,arr);
}