#include<bits/stdc++.h>
using namespace std;

string rev(string se){
  int s =0;
   int e = se.length()-1;
   while(s<e){
    swap(se[s++],se[e--]);
}
return se;
}

int main(){
    string s;
    cin >> s;
    cout << s << endl;

    cout<<rev(s)<<endl;
    
}