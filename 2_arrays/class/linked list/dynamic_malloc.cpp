// Include the iostream library for input/output operations (cout, cin)
#include <iostream>
// Include cstdlib for memory management functions like malloc() and free()
#include <cstdlib>
// Use the standard namespace to avoid writing std:: before cout, cin, etc.
using namespace std;

// Define the Node structure for a singly linked list
// Each node contains data and a pointer to the next node
struct Node{
    int data;              // Stores the integer value of the current node
    struct Node* next;     // Pointer to the next node in the linked list
};

// Function to create a new node with the given data value
// Parameters: int data - the value to store in the new node
// Returns: pointer to the newly created Node, or NULL if memory allocation fails
struct Node* createNode(int data){
    // Dynamically allocate memory for a new Node structure
    // malloc() returns a void pointer, so we cast it to struct Node*
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    
    // Check if memory allocation was successful
    // If malloc fails, it returns NULL
    if(newNode == NULL){
        cout << "Memory allocation failed!" << endl;
        return NULL;  // Return NULL to indicate failure
    }

    // Initialize the new node's data with the provided value
    newNode->data = data;
    // Initialize the next pointer to NULL (this will be the last node until linked to another)
    newNode->next = NULL;
    // Return the pointer to the newly created node
    return newNode;
}

