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


int heightTree(node* root) {
    if(root == NULL) {
        return 0;
    }
    return max(heightTree(root->left),heightTree(root->right)) + 1;
}


bool isBalanced(node* root) {

    if(root == NULL) {
        return true;
    }

    if(isBalanced(root->left) == false) {
        return false;
    }

    if(isBalanced(root->right) == false) {
        return false;
    }

    int lHeight = heightTree(root->left);
    int rHeight = heightTree(root->right);

    if(abs(lHeight-rHeight) <= 1) {
        return true;
    }
    else {
        return false;
    }
}

// optimise methode

bool isBalanced(node* root,int* height) {

    if(root == NULL) {
        return true;
    }

    int lh=0, rh = 0;
    if(isBalanced(root->left,&lh) == false) {
        return false;
    }

    if(isBalanced(root->right,&rh) == false) {
        return false;
    }

    *height = max(lh,rh) + 1;

    if(abs(lh-rh) <= 1) {
        return true;
    }
    else {
        return false;
    }

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

    node* root2;
    root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);

    if(isBalanced(root2)) {
        cout << "Tree is Balanced" << endl;
    } else {
        cout << "Tree is Unbalanced" << endl;
    }

    // optimise methode
    int height = 0;
    if(isBalanced(root, &height)) {
        cout << "Tree is Balanced" << endl;
    } else {
        cout << "Tree is Unbalanced" << endl;
    }


    
    return 0;


        /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
}