#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool searchBST(Node* root, int key) {

    if(root==nullptr){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(key<root->data){
        return searchBST(root->left, key);
    }
    else{
        return searchBST(root->right, key);
    }

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

    cout << searchBST(root, 15) << endl;
    cout << searchBST(root, 100) << endl;

    return 0;
}