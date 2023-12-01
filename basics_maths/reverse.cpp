<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
 
 int count(int n)
 {
    int rev=0;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;
    }
    return rev;
 }

 int main()
 {
    int n ;
    cout<<"enter the number";
    cin>>n;
    cout<<"the reverse of a number  "<<count(n);
    return 0;
    
=======
#include<bits/stdc++.h>
using namespace std;
 
 int count(int n)
 {
    int rev=0;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;
    }
    return rev;
 }

 int main()
 {
    int n ;
    cout<<"enter the number";
    cin>>n;
    cout<<"the reverse of a number  "<<count(n);
    return 0;
    
>>>>>>> addbbdbe335f8d7df86b5d78fbf43d04daf3373e
 }