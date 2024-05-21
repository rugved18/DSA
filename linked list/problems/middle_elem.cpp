#include <iostream>

// Define the Node structure
class Node {
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to find the middle node of a linked list
Node* findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    // Creating a linked list
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Finding the middle node
    Node *middle = findMiddle(head);

    // Printing the value of the middle node
    std::cout << "Middle node value: " << middle->data << std::endl;
    return 0;
}
