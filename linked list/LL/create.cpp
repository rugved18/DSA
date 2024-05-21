#include<bits/stdc++.h>
using namespace std;

class node{
    public:
      int data;
      node* next;

      node(int data1){
        data = data1;
        next = nullptr;
      }
};

int main(){

    vector <int> arr ={2,4,3,5};

    for(int i=0;i<arr.size();i++){
    node* temp =new node(arr[i]);
    cout<< temp->data;

    }
    
}

