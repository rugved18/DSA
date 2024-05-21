#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    node(int data1, node* next1, node* back1){
         data =data1;
        next =next1;
        back =back1;
    }

    node(int data1){
        data =data1;
        next =nullptr;
        back =nullptr;
    } 
};
 node* insertnew(vector <int> &arr){
   node* head = new node(arr[0]);

   node* prev =head;

   for(int i =1; i<arr.size();i++){
      node* temp = new node(arr[i], nullptr, prev);
      prev->next = temp;
      prev =temp;
   }

   return head;
} 

void display(node* head) {
        node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

int main(){
  vector <int> arr ={2,3,4,5};

    node* temp =  insertnew(arr);
    display(temp);
    return 0;

}