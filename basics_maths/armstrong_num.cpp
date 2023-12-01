<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
 
 int armstrong(int n)
 {
   int sum =0;
   int temp=n;
   while(n>0)
   {
    int ld=n%10;
    sum=sum+(ld*ld*ld);
    n=n/10;
   }
   if(sum==temp) return true;
   else return false;
 }
    

 int main()
 {
    int ne ;
    cout<<"enter the number";
    cin>>ne;
    cout<<armstrong(ne);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
 
 int armstrong(int n)
 {
   int sum =0;
   int temp=n;
   while(n>0)
   {
    int ld=n%10;
    sum=sum+(ld*ld*ld);
    n=n/10;
   }
   if(sum==temp) return true;
   else return false;
 }
    

 int main()
 {
    int ne ;
    cout<<"enter the number";
    cin>>ne;
    cout<<armstrong(ne);
    return 0;
>>>>>>> addbbdbe335f8d7df86b5d78fbf43d04daf3373e
 }