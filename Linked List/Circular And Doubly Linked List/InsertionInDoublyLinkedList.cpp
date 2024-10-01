// Insertion in Doubly Linked List




#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    // Constructor
    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Doubly Linked List class
class LinkedList {
public:
    Node* head;
    Node* tail;
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtIndex(int index, int value) {
        Node* newNode = new Node(value);

        if (index == 0) {
            newNode->next = head;
            if (head != NULL) head->prev = newNode;
            head = newNode;
            if (tail == NULL) tail = newNode;
        } 
        else {
            // Insert at any other position
            Node* iter = head;
            for (int i = 0; i < index - 1 && iter != NULL; i++) iter = iter -> next;

            // If the given index is out of bounds
            if (iter == NULL) {
                cout << "Index out of bounds\n";
                return;
            }

            Node* A = iter;
            Node* B = iter->next;
            A->next = newNode;
            newNode->prev = A;

            if (B != NULL) {
                B->prev = newNode;
                newNode->next = B;
            }
            else tail = newNode;
        }
    }

    // Print linked list
    void printValues() {
        Node* current = head;
        while (current != NULL) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << '\n';
    }
};

int main() {
    LinkedList list;
    list.insertAtIndex(0, 10); 
    list.insertAtIndex(1, 20);
    list.insertAtIndex(1, 15); 
    list.insertAtIndex(0, 5); 

    list.printValues();
}