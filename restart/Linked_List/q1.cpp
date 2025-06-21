// Insert the node at the head of the linked list.
node* insertHead(node* head, int elem) {
    // Create a new node with the given element.
    node* temp = new node(elem);
    
    // Point the new node's next to the current head.
    temp->next = head;

    // The new node becomes the new head of the list.
    return temp;
}

// Insert the node at the end of the linked list.
node* insertLast(node* head, int elem) {
    // Temporary pointer to traverse the list starting from the head.
    node* temp = head;

    // Create a new node with the given element.
    node* newone = new node(elem);

    // Traverse to the last node of the linked list.
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link the new node at the end of the list.
    temp->next = newone;

    // Return the original head as the list remains unchanged except for the last node.
    return head;
}

// Insert the node at the k-th position in the linked list.
node* insertK(node* head, int elem, int k) {
    // If the position is 1, insert at the head.
    if (k == 1) {
        // Create a new node with the given element.
        node* newone = new node(elem);

        // Point the new node's next to the current head.
        newone->next = head;

        // Return the new node as the new head of the list.
        return newone;
    }

    // Temporary pointer to traverse the list starting from the head.
    node* temp = head;

    // Counter to track the current position.
    int cnt = 0;

    // Traverse the list until the desired position (k-1) is reached or the list ends.
    while (temp != NULL) {
        cnt++;

        // If the position is just before the k-th node:
        if (cnt == k - 1) {
            // Create a new node with the given element.
            node* newone = new node(elem);

            // Link the new node to the k-th node.
            newone->next = temp->next;

            // Update the current node's next to point to the new node.
            temp->next = newone;

            // Break out of the loop as insertion is complete.
            break;
        }

        // Move to the next node.
        temp = temp->next;
    }

    // Return the original head as the list structure starts from the same head.
    return head;
}
