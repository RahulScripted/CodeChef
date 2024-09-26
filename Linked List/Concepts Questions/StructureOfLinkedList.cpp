// Implementation of Linked List




#include <iostream>
using namespace std;

// Create a struct with two values
struct Node {
    int value;
    Node* next;
    
    // Constructor
    Node(int val): value(val), next(nullptr) {}
};

int main() {
    Node* head = new Node(1);
    cout << "The value at head is " << head -> value << '\n';
}
