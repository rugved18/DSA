<<<<<<< HEAD
// print linearly from N to 1 using backtracking 
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if (i>n) return;
    f(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"enter the  number  ";
    cin>>n;
    f(1,n);

=======
// print linearly from N to 1 using backtracking 
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if (i>n) return;
    f(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"enter the  number  ";
    cin>>n;
    f(1,n);

>>>>>>> addbbdbe335f8d7df86b5d78fbf43d04daf3373e
}