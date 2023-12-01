<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
 
 int prime(int n)
 {
   int  cnt=0;
    for(int i=1;i<=n;i++){
        if (n%i==0)
          {
           cnt++;
        }
    }
    if (cnt==2){
        return true;
    }
    else{
        return false;
    }
    
 }
    

 int main()
 {
    int ne ;
    cout<<"enter the number";
    cin>>ne;
    cout<<prime(ne);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
 
 int prime(int n)
 {
   int  cnt=0;
    for(int i=1;i<=n;i++){
        if (n%i==0)
          {
           cnt++;
        }
    }
    if (cnt==2){
        return true;
    }
    else{
        return false;
    }
    
 }
    

 int main()
 {
    int ne ;
    cout<<"enter the number";
    cin>>ne;
    cout<<prime(ne);
    return 0;
>>>>>>> addbbdbe335f8d7df86b5d78fbf43d04daf3373e
 }