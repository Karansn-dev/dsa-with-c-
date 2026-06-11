#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insert at Head
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at Tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Print Linked List
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    // Create first node
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    cout << "Initial List: ";
    print(head);

    // Insert at Head
    insertAtHead(head, 5);
    cout << "After inserting 5 at Head: ";
    print(head);

    // Insert at Tail
    insertAtTail(tail, 20);
    cout << "After inserting 20 at Tail: ";
    print(head);

     

    return 0;
}