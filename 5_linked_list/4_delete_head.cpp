#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Delete the first node
void deleteHead(Node*& head) {
    
    Node* temp = head;
    head = head->next;
    delete temp;


}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    // Create linked list:
    // 10 -> 20 -> 30 -> NULL

    Node* head = new Node;
    head->data = 10;
    head->next = NULL;

    Node* second = new Node;
    second->data = 20;
    second->next = NULL;

    Node* third = new Node;
    third->data = 30;
    third->next = NULL;

    head->next = second;
    second->next = third;

    cout << "Before deletion: ";
    printList(head);

    deleteHead(head);

    cout << "\nAfter deletion: ";
    printList(head);

    return 0;
}