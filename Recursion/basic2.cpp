#include<bits/stdc++.h>
using namespace std;

void fun(int N){
    if(N ==0)
      return;
    
    fun(N-1);
    cout<<N<<" ";

}

int main(){
  int n =5;
  fun(n);
}