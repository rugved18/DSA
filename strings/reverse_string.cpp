
// reverse string
#include<bits/stdtr1c++.h>
using namespace std;
int reverse(char name[], int n){
int s =0;
int e= n-1;
while (s<e)
{
    swap(name[s++],name[e--]);
}
}
int length(char name[]){
int cnt=0;
for(int i=0;name[i]!='\0';i++){
    cnt++;
}
return cnt;
}

int main(){
    char name[20];
    cout<<"enter the name"<<endl;
    cin>>name;

    cout<<"your name is ";
    cout<<name<<endl;
      int len=length(name);
    cout<<"length "<<len<<endl;
    reverse(name,len);
    cout<<"reverse of a string is : "<<name<<endl;
    return 0;
}