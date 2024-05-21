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

node* deleteHead(node* head){

     if(head == NULL){
        return head;
    }
    node* temp =head;
    head = temp->next;
   delete temp;
    return head;
}
node* deleteLast(node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
     node* temp =head;
    if(temp->next->next != NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next =NULL;
    return head;
}

node* deleteK(node* head, int k){
    if(head == NULL){
        return head;
    }
    if(k == 1){
       node* temp =head;
       head =temp->next;
       delete temp;
       return head;
    }

    int cnt =1;
    node* temp =head;
    node* prs = NULL;

    while(temp != NULL){
        if(cnt == k){
            prs->next = temp->next;
            delete temp;
            break;
        }
        prs =temp ;
        temp =temp->next;
        cnt++;
    }
   
   return head;

}

node* deleteELE(node* head, int el){
    if(head == NULL){
        return head;
    }
    if(head->data == el){
       node* temp =head;
       head =temp->next;
       delete temp;
       return head;
    }

    node* temp =head;
    node* prs = NULL;

    while(temp != NULL){
        if(temp->data == el){
            prs->next = temp->next;
            delete temp;
            break;
        }
        prs =temp ;
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
    cout<<"new linked list"<<endl;
     head =deleteELE(head,3);
     display(head);
    return 0;
}
