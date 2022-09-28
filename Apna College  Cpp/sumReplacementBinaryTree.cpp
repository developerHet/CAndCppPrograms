#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    
    }
};


void sumReplacement(node* root) {
    if(root == NULL) {
        return;
    }
    sumReplacement(root->left);
    sumReplacement(root->right);
    if(root->left != NULL) {
        root->data += root->left->data;
    }
    if(root->right != NULL) {
        root->data += root->right->data;
    }
}

void preOrder(node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    node *root;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    preOrder(root);
    cout << endl;
    sumReplacement(root);
    preOrder(root);

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}