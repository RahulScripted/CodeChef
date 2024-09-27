// Linked List - Insertion at k-th position




#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

// Node structure for linked list
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Definition of the insertAfterK function
void insertAfterK(Node* head,int value, int k) {
    Node* newNode = new Node(value);
    Node* current = head;

    if (head == NULL) {
        head = newNode;
        return;
    }

    for (int i = 1; i < k && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        delete newNode; 
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}



// Print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    insertAfterK(head,5, 2);
    cout << "After inserting 5 after 2nd node: ";
    printList(head);

    insertAfterK(head,6, 4);
    cout << "After inserting 6 after 4th node: ";
    printList(head);
}
