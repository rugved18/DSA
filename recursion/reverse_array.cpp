<<<<<<< HEAD
// #include<bits/stdc++.h>
// using namespace std;
// int rev(int l,int r,int arr[])
// {
//  if (l>=r) return ;
//  int arr[];
//  swap(arr[l],arr[r]);
//  rev(l+1,r-1,arr[]);

// }
// int main()
// {
//     int n;
//     cout<<"enter the number of element";
//     cin>>n;
//    int arr[n];
//    for (int i=0;i<n;i++)
//    {
//          cout<<"enter the number";
//          cin>>arr[i];
//    }
//    for (int i=0;i<n;i++)
//    {
//       cout<<arr[i]<<"";
//    }

// }

#include<bits/stdc++.h>
using namespace std;
void  rev(int i,int arr[],int n)
{

if (i>=n/2) return ;
 
 swap(arr[i],arr[n-i-1]);
 rev(i+1,arr,n);

}
int main()
{
    int n;
    cout<<"enter the number of element: ";
    cin>>n;
   int arr[n];
   for (int i=0;i<n;i++)
   {
         cout<<"enter the number: ";
         cin>>arr[i];
   }
   rev(0,arr,n);
   for (int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
}
=======
// #include<bits/stdc++.h>
// using namespace std;
// int rev(int l,int r,int arr[])
// {
//  if (l>=r) return ;
//  int arr[];
//  swap(arr[l],arr[r]);
//  rev(l+1,r-1,arr[]);

// }
// int main()
// {
//     int n;
//     cout<<"enter the number of element";
//     cin>>n;
//    int arr[n];
//    for (int i=0;i<n;i++)
//    {
//          cout<<"enter the number";
//          cin>>arr[i];
//    }
//    for (int i=0;i<n;i++)
//    {
//       cout<<arr[i]<<"";
//    }

// }

#include<bits/stdc++.h>
using namespace std;
void  rev(int i,int arr[],int n)
{

if (i>=n/2) return ;
 
 swap(arr[i],arr[n-i-1]);
 rev(i+1,arr,n);

}
int main()
{
    int n;
    cout<<"enter the number of element: ";
    cin>>n;
   int arr[n];
   for (int i=0;i<n;i++)
   {
         cout<<"enter the number: ";
         cin>>arr[i];
   }
   rev(0,arr,n);
   for (int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
}
>>>>>>> addbbdbe335f8d7df86b5d78fbf43d04daf3373e
