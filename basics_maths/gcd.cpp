#include<bits/stdc++.h>
using namespace std;
 
 int gcd(int n1, int n2)
 {
    int number;
   for (int i=1;i<=min(n1,n2);i++)
   {
    if (n1%i==0 && n2%i==0)
    {
        number=i;
    }
   }
   return number;
 }

 int main()
 {
    int n1 ;
    cout<<"enter the number";
    cin>>n1;
     int n2 ;
    cout<<"enter the number";
    cin>>n2;
    cout<<gcd(n1,n2);
    return 0;
    
 }
