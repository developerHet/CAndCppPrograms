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


int main() {
    node *root;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}