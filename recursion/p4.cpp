<<<<<<< HEAD
// print linearly from 1 to N using backtracking 
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if (i<1) return;
    f(i-1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"enter the  number ";
    cin>>n;
    f(n,n);

=======
// print linearly from 1 to N using backtracking 
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if (i<1) return;
    f(i-1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"enter the  number ";
    cin>>n;
    f(n,n);

>>>>>>> addbbdbe335f8d7df86b5d78fbf43d04daf3373e
}