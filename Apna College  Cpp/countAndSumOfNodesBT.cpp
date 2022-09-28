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

int nodeCount(node* root) {
    if(root == NULL) {
        return 0;
    }
    return nodeCount(root->left) + nodeCount(root->right) + 1;
}

int nodeValueSum(node* root) {
    if(root == NULL) {
        return 0;
    }
    return nodeValueSum(root->left) + nodeValueSum(root->right) + root->data;
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


    // node count
    cout << nodeCount(root) << endl;

    // sum of node value
    cout << nodeValueSum(root) << endl;

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}