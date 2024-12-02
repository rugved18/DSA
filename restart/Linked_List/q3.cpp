//find the lenght of the linked list
int function(node* head) {
    node* temp = head;
    int cnt = 0; // Initialize the counter to 0.

    // Traverse the linked list, including the last node.
    while (temp != NULL) { 
        cnt++;          // Increment the counter for each node.
        temp = temp->next; // Move to the next node.
    }

    return cnt; // Return the total count of nodes.
}
