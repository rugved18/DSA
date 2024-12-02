//search a element in the linked list
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
