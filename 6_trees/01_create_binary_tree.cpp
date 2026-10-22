#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// void preorder(Node* root) {
//     if (root == nullptr) {
//         return;
//     }

//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root){
//     if(root == nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right); 
// }

void postorder(Node* root){
      if(root == nullptr){
        return;
      }

      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<" ";
}



int main() {
    Node* root = new Node;
    root->data = 10;
    root->left = nullptr;
    root->right = nullptr;

    Node* leftChild = new Node;
    leftChild->data = 5;
    leftChild->left = nullptr;
    leftChild->right = nullptr;

    Node* rightChild = new Node;
    rightChild->data = 20;
    rightChild->left = nullptr;
    rightChild->right = nullptr;

    Node* leftChildleft = new Node;
    leftChildleft->data = 3;
    leftChildleft->left = nullptr;
    leftChildleft->right = nullptr;

    Node* leftChildright = new Node;
    leftChildright->data = 6;
    leftChildright->left = nullptr;
    leftChildleft->right = nullptr;

    root->left = leftChild;
    root->right = rightChild;

    leftChild->left = leftChildleft;
    leftChild->right = leftChildright;

    // preorder(root);
    postorder(root);

    return 0;
}