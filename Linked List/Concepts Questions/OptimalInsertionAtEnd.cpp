// Optimal insertion at the end




#include <iostream>
using namespace std;

// Node class representing a node in the linked list
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// LinkedList class representing the linked list
class LinkedList {
public:
    Node* head;
    Node* tail;

    // Constructor to initialize the head and tail pointers
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        
        // If the linked list is empty
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        
        tail->next = newNode;
        tail = newNode;
    }

    // Print
    void printValues() {
        if (head == NULL) {
            cout << "The list is empty.\n";
            return;
        } else {
            Node* current = head;
            while (current != NULL) {
                cout << current->val << ' ';
                current = current->next;
            }
            cout << '\n';
        }
    }
};

int main() {
    LinkedList list;
    
    // Inserting values into the linked list
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    
    // Printing values of the linked list
    cout << "Values in the linked list: ";
    list.printValues();
    
    return 0;
}