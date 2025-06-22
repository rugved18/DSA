#include<bits/stdc++.h>

using namespace std;

int fun(int a, int b){
    if(b == 0){
        return 1;
    }
    return a*fun(a,b-1);
}

int main(){

    int a=2;
    int b =3;
   cout<<fun(a,b);

}