#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data1){
        data =data1;
        next = nullptr;

    }
};

node* convert(vector <int> &arr){
    node* head = new node(arr[0]);
    node* mover =head;

    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next =temp;
        mover =temp;
    }
    return head;
}

int length(node* head){
    node* temp =head;
    int cnt =0;
    while(temp){
        // cout<<temp->data<<" ";
        cnt++;
        temp =temp->next;
    }
    return cnt;
}

int main(){

    vector <int> arr ={2,4,5,6};

    node* head =   head =convert(arr);
  cout<<"the number element in the array "<< endl;
    cout<< length(head);
}