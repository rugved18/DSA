int length(Node* slow,Node* fast){
    int cnt =1;
    fast =fast->next;
    
    while(fast != slow){
        cnt++;
        fast =fast->next;
    }
    return cnt;
}
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            return length(slow, fast);
        }
    }
    return 0;
}
