// Function to delete the head node of the linked list.
node* deleteHead(node* head) {
    // If the list is empty, return NULL.
    if (head == NULL) {
        return head;
    }

    // Store the current head in a temporary node.
    node* temp = head;

    // Move the head pointer to the next node.
    head = temp->next;

    // Delete the old head node.
    delete temp;

    // Return the new head.
    return head;
}

// Function to delete the last node of the linked list.
node* deleteLast(node* head) {
    // If the list is empty or contains only one node, return NULL.
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    // Temporary pointer to traverse the list.
    node* temp = head;

    // Traverse until the second last node (node before the last node).
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete the last node.
    delete temp->next;

    // Set the second last node's next to NULL.
    temp->next = NULL;

    // Return the head of the modified list.
    return head;
}

// Function to delete the k-th node in the linked list.
node* deleteK(node* head, int k) {
    // If the list is empty, return NULL.
    if (head == NULL) {
        return head;
    }

    // If k is 1, delete the head node.
    if (k == 1) {
        node* temp = head;
        head = temp->next;
        delete temp;
        return head;
    }

    // Counter to track the position of nodes.
    int cnt = 1;

    // Pointers for traversal.
    node* temp = head;
    node* prs = NULL; // Pointer to store the previous node.

    // Traverse the list to find the k-th node.
    while (temp != NULL) {
        if (cnt == k) {
            // Remove the k-th node by updating the previous node's next pointer.
            prs->next = temp->next;
            delete temp;
            break;
        }

        // Move to the next node.
        prs = temp;
        temp = temp->next;
        cnt++;
    }

    // Return the head of the modified list.
    return head;
}

// Function to delete the first node containing a specific element.
node* deleteELE(node* head, int el) {
    // If the list is empty, return NULL.
    if (head == NULL) {
        return head;
    }

    // If the head node contains the element to be deleted.
    if (head->data == el) {
        node* temp = head;
        head = temp->next;
        delete temp;
        return head;
    }

    // Pointers for traversal.
    node* temp = head;
    node* prs = NULL; // Pointer to store the previous node.

    // Traverse the list to find the node containing the element.
    while (temp != NULL) {
        if (temp->data == el) {
            // Remove the node by updating the previous node's next pointer.
            prs->next = temp->next;
            delete temp;
            break;
        }

        // Move to the next node.
        prs = temp;
        temp = temp->next;
    }

    // Return the head of the modified list.
    return head;
}
