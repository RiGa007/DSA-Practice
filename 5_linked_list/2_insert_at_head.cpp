#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Insert 5 at the head
    Node* newNode = 5;
 
  
    if(head== NULL){
        newNode = head;
        newNode -> next = NULL;
    }
    newNode -> next = head;
    head = newNode;


    // Print the list to verify


    return 0;
}