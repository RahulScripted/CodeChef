// Insertion at end in Circular Linked List




#include <iostream>
using namespace std;

// Node structure definition
class Node {
public:
    int value;
    Node* next;
    Node(int val): value(val), next(nullptr) {}
    Node(){
        head = NULL;
        tail = NULL;
    }
};

// Global Pointer
Node* head = nullptr;
Node* tail = nullptr;


// Insert a node at the end of the circular linked list
void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) head = newNode;
    else tail->next = newNode;

    tail = newNode;
    tail->next = head;
}

// Display the circular linked list
void display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->value << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);

    cout << "Circular Linked List: ";
    display();

    return 0;
}