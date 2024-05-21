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

node* reverse(node* head){
    stack<int> st;
    node* temp =head;

    while(temp != nullptr){
        st.push(temp->data);
        temp =temp->next;
    }

    temp =head;

    while(temp != nullptr){
        temp->data =st.top();
        st.pop();

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
     head =reverse(head);
     display(head);
    return 0;
}
