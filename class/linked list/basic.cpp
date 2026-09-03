// Include all standard C++ libraries
#include <bits/stdc++.h>
using namespace std;

// Define a Node structure for linked list
struct Node {
    int data;        // Data stored in the node
    Node *next;      // Pointer to the next node
};

// Global pointer to the head of the linked list
Node* head = NULL;

int main(){
    // Create first node and assign value 10
    Node* node1 = new Node;
    node1 -> data = 10;
    node1 -> next = NULL;      // First node points to nothing initially
    head = node1;              // head points to the first node

    // Create second node with value 25
    Node* node2 = new Node;
    node2 -> data = 25;
    node2 -> next = NULL;
    node1 -> next = node2;     // Link first node to second node

    // Create third node with value 30
    Node* node3 = new Node;
    node3 -> data = 30;
    node3 -> next = NULL;
    node2 -> next = node3;     // Link second node to third node

    // Create fourth node with value 40
    Node* node4 = new Node;
    node4 -> data = 40;
    node4 -> next = node1;      // Link fourth node to head (creates a loop)
    head = node4;              // Update head to point to the new first node

    // Traverse and print all node values
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;   // Move to next node
    }
}
