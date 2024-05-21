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

node* deleteHead(node* head){
    node* temp =head;

    head = head->next;
    head->back = nullptr;
    temp->next= nullptr;

    delete temp;
    
    return head;
}

node* deleteLast(node* head){
    node* temp =head;
    node* prev =nullptr;

    while(temp->next != NULL){
        prev =temp;
        temp =temp->next;
    }
    temp->back = nullptr;
    prev->next = nullptr;

    delete temp;

    return head;
    
}

node* deleteKth(node* head, int k) {
    if (k == 1) {
        if (head == nullptr)
            return nullptr;
        node* temp = head;

        head = head->next;
        head->back = nullptr;
        temp->next = nullptr;
        delete temp;
        return head;
    }

    node* temp = head;
    int cnt = 1;
    while (temp != nullptr && cnt < k) {
        temp = temp->next;
        cnt++;
    }

    if (temp == nullptr) // k is greater than the size of the list
        return head;

    if (temp->back != nullptr)
        temp->back->next = temp->next;
    if (temp->next != nullptr)
        temp->next->back = temp->back;
    
    delete temp;
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
     
    cout<<"original"<<endl;
    node* temp =  insertnew(arr);
    display(temp);
    
    cout<<endl;
    cout<<"new one"<<endl;
    temp =deleteKth(temp,1);
    display(temp);
    return 0;

}