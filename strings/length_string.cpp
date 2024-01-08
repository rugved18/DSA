// length of the string
// length of the string
#include<bits/stdtr1c++.h>
using namespace std;
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

    cout<<"length "<<length(name)<<endl;

    return 0;
}