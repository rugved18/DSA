#include<bits/stdc++.h>
using namespace std;
 
 int gcd_eucli(int n1, int n2)
 {
  
    while (n1>0 && n2>0)
    {
        if (n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if (n1==0) return n2;
    else return n1;
 }

 int main()
 {
    int n1 ;
    cout<<"enter the number";
    cin>>n1;
     int n2 ;
    cout<<"enter the number";
    cin>>n2;
    cout<<gcd_eucli(n1,n2);
    return 0;
    
 }
