// print linearly from  1 to n 
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if (i>n) return;
    cout<<i<<" ";
    f(i+1,n);
}
int main()
{
    int n;
    cout<<"enter the  number ";
    cin>>n;
    f(1,n);

}
