#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Delete the last node
void deleteTail(Node*& head) {
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
    }

    Node* temp = head;
    Node* temp_pre = NULL;

    while(temp->next != NULL){
        temp_pre = temp;
        temp= temp-> next;
    }
    temp_pre-> next = NULL;
    delete temp;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    // Create:
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

    deleteTail(head);

    cout << "\nAfter deletion: ";
    printList(head);

    return 0;
}