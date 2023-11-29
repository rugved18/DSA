#include<bits/stdc++.h>
using namespace std;
 
 int palin(int n)
 {
    int rev=0;
    int number=n;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
    return 0;
}
    }
    if (number==rev)
    {
        return true;
    }
    else
    {
        return false;
        
    }
 }

 int main()
 {
    int ne ;
    cout<<"enter the number";
    cin>>ne;
    cout<<palin(ne);
    return 0;
 }