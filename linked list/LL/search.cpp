#include<bits/stdc++.h>
using namespace  std;


class node{
    public:
    int data;
    node* next;

    node(int data1){
        data =data1;
        next =nullptr;
    }
};

node* conver_array_linklist(vector<int> &arr){
    node* head =new node(arr[0]);
    node* mover =head;

    for(int i=1;i<arr.size();i++){
        node* temp =new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int search(node* head, int k){
    node* temp = head;
    while(temp){
        if(temp->data == k){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
 int main(){
    vector<int> arr ={2,4,6,9};
     node* head = conver_array_linklist(arr);
     cout<<search(head, 0);
}