//reverse a linked list
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
