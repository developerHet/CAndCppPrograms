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


void printNodesInSubtree(node* root,int k) {
    if(root == NULL || k<0) {
        return;
    }

    if(k==0) {
        cout << root->data << " ";
        return;
    }

    printNodesInSubtree(root->left,k-1);
    printNodesInSubtree(root->right,k-1);
}

int nodeAtKDist(node* root,node* target, int k) {
    if(root == NULL) {
        return -1;
    }

    if(root==target) {
        printNodesInSubtree(root,k);
        return 0;
    }

    int leftDist = nodeAtKDist(root->left,target,k);
    if(leftDist != -1) {
        if(leftDist + 1 == k) {
            cout << root->data << " ";
        }
        else {
           printNodesInSubtree(root->right,k-2-leftDist);
        }
        return leftDist+1;
    }

    int rightDist = nodeAtKDist(root->right,target, k);
    if(rightDist != -1) {
        if(rightDist + 1 == k) {
            cout << root->data << " ";
        }
        else {
            printNodesInSubtree(root->left,k-2-rightDist);
        }
        return rightDist+1;
    }

    return -1;
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

    nodeAtKDist(root,root,2);

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}