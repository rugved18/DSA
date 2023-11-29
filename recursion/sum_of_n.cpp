// // sum of N number using parameter
// #include<bits/stdc++.h>
// using namespace std;
// void f(int i,int sum)
// {
//     if (i<1)
//     {
//         cout<<sum;
//         return;
//     } 
    
//     f(i-1,sum+i);
// }
// int main()
// {
//     int n;
//     cout<<"enter the  number ";
//     cin>>n;
//     f(n,0);

// }

// sum of N number using function 
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n==0) return 0;
   else  return n+sum(n-1);
}
int main()
{
    int n;
    cout<<"enter the  number ";
    cin>>n;
    cout<<"the sum of 1 to "<<n<<" is :"<<sum(n);

}
