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


bool checkBST(node* root,node* min=NULL,node* max=NULL) {

    if(root == NULL ) {
        return true;
    }

    // if(root->data > min && root->data < max && checkBST(root->left,min,root->data) && checkBST(root->right,root->data,max)){
    //     return  true;
    // }

    if(min != NULL && root->data <= min->data) {
        return false;
    }

    if(max != NULL && root->data >= max->data) {
        return false;
    }

    bool left = checkBST(root->left,NULL,root);
    bool right = checkBST(root->right,root,NULL);

    return left && right;
}


int main() {
    node *root;
    root = new node(5);
    root->left = new node(1);
    root->right = new node(7);
    root->right->left = new node(6);
    root->right->right = new node(8);
    root->left->right = new node(3);
    root->left->right->left = new node(2);
    root->left->right->right = new node(4);

    cout << checkBST(root);

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}