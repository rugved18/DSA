// print linearly from  n to 1
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if (i<1) return;
    cout<<i<<" ";
    f(i-1,n);
}
int main()
{
    int n;
    cout<<"enter the  number ";
    cin>>n;
    f(n,n);

}