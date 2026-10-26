#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};



    
// bool searchBST(Node* root, int key) {

//     if(root==nullptr){
//         return false;
//     }

//     if(root->data == key){
//         return true;
//     }

//     if(key<root->data){
//         return searchBST(root->left, key);
//     }
//     else{
//         return searchBST(root->right, key);
//     }

// }

Node* insertBST(Node* root, int value) {
    // 1. If root is nullptr, create and return a new node.
    if(root==nullptr){
        Node* newNode = new Node;
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }


    if(value<root->data){
        root->left = insertBST(root->left, value);
     
    }

    if(value>root->data){
    root->right = insertBST(root->right, value);
   
    }
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    // Create this BST:
    //
    //       12
    //      /  \
    //     7    18
    //    / \   / \
    //   4   9 15  22

    // Test searching for 15
    // Test searching for 100


    Node* root = new Node;
    Node* leftChild = new Node;
    Node* rightChild = new Node;
    Node* node4 = new Node;
    Node* node9 = new Node;
    Node* node15 = new Node;
    Node* node22 = new Node;

    root->data = 12;
    leftChild->data = 7;
    rightChild->data = 18;
    node4->data = 4;
    node9->data = 9;
    node15->data = 15;
    node22->data = 22;

    root->left = leftChild;
    root->right = rightChild;

    leftChild->left = node4;
    leftChild->right = node9;

    rightChild->left = node15;
    rightChild->right = node22;

    node4->left = nullptr;
    node4->right = nullptr;

    node9->left = nullptr;
    node9->right = nullptr;

    node15->left = nullptr;
    node15->right = nullptr;

    node22->left = nullptr;
    node22->right = nullptr;

    cout << boolalpha;

    // cout << searchBST(root, 15) << endl;
    // cout << searchBST(root, 100) << endl;

    root = insertBST(root, 21);
    inorder(root);
    cout<<endl;


    return 0;
}