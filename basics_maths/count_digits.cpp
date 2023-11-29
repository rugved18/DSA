#include<bits/stdc++.h>
using namespace std;
 
 int count(int n)
 {
    int c=0;
    while(n>0)
    {
        
        n=n/10;
        c++;
    }
    return c;
 }

 int main()
 {
    int n ;
    cout<<"enter the number";
    cin>>n;
    cout<<"the number of digits  "<<count(n);
    return 0;
    
 }




// #include<bits/stdc++.h>

// using namespace std;

// int count_digits( int n )
// {
//    int x = n; int count =0;
//    while( x !=0 ) 
//    {
//        x = x / 10;
//        count++;
//    }
//    return count;
// }


// int main()
// {
//    int n = 12345;
//    cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
//    return 0;
// }

