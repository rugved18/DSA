#include<bits/stdc++.h>
using namespace std;
 
 class node {
    public:
    int data;
    node* next;

   node(int data1){
    data =data1;
    next =nullptr;
   } 
    
};

node* insertAtBeginning(node* head, int val) {
    node* newNode = new node(val);
    newNode->next = head;
    return newNode;
}

node* insertHead(node* head , int elem){
    node* temp = new node(elem);
    temp->next =head;

    return temp;
}

node* insertLast(node* head, int elem){
    node* temp = head;
    node* newone = new node(elem);

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next =newone;
    return head;
}
node* insertK(node* head, int elem, int k){
    if(k == 1){
        node* newone =new node(elem);
        newone->next =head;
        return newone;
    }
    node* temp =head;
    int cnt =0;
    while(temp != NULL){
         cnt++;

         if(cnt == k-1){
            node* newone =new node(elem);
            newone->next = temp->next;
            temp->next =newone;
            break;
         }
         temp =temp->next;
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

int main() {
     node* head = nullptr;
    head = insertAtBeginning(head, 11);
    head = insertAtBeginning(head, 7);
    head = insertAtBeginning(head, 3);

    cout << "Original linked list: "<<endl;;
    display(head);
      cout<<endl;
    cout<<"enter the element"<<endl;
    int elem;
    cin>>elem;
   cout<<endl;
   cout<<"enter the postion of the element"<<endl;
    int k;
    cin>>k;
   cout<<endl;
    cout<<"new linked list"<<endl;
     head =insertK(head,elem,k);
     display(head);
    return 0;
}
