#include<bits/stdc++.h>
using namespace std;
int check(int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i == 0 || i== r-1 || j== 0 || j== c-1 ){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int r;
    int c;
    cin>>r>>c;
    check(r,c);
    return 0;

}