#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtEnd(int value) {
    // Create new node
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    // If the list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Find the last node
    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;
}

void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    display();

    return 0;
}