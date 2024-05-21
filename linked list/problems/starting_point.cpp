ListNode *detectCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;
2
       while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast =fast->next->next;

            while(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
       } 
       return NULL;
    }