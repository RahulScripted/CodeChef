// Deletion in Circular Linked List




#include <iostream>
using namespace std;

// Node structure definition
class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

// Global pointers
Node* head = nullptr;
Node* tail = nullptr;

// Insert a node at the end of the circular linked list
void insertAtEnd(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        tail->next = head;  
    } 
    else {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;  
    }
}

// Function to delete a node with a given value
void deleteNode(int value) {
    // Base Case
    if (head == nullptr) return;

    // Only 1 Node
    if (head == tail && head->value == value) {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    Node* iter = head;
    if (head->value == value) {
        Node* temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
        return;
    }

    while (iter->next != head) {
        if (iter->next->value == value) {
            Node* temp = iter->next;
            if (temp == tail) {
                tail = iter;
            }

            iter->next = temp->next;
            delete temp;
            return;
        }
        iter = iter->next;
    }
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

    // Deleting a node with value 2
    deleteNode(2);
    cout << "After deleting 2: ";
    display();

    // Deleting the tail node (value 4)
    deleteNode(4);
    cout << "After deleting 4: ";
    display();
}