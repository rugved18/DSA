ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL){
            return list2;
        }
        else if(list2 == NULL){
            return list1;
        }

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

    vector<int> arr;

    while(temp1 != NULL){
      arr.push_back(temp1->val);
      temp1 = temp1->next; 
    }

    while(temp2 != NULL){
      arr.push_back(temp2->val);
      temp2 = temp2->next; 
    }

    sort(arr.begin(),arr.end());

    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;

     for(int i=1;i<arr.size();i++){
         ListNode* temp = new ListNode(arr[i]);
         mover->next = temp;
         mover = temp;
     }
     return head;
    }