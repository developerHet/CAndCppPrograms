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


node* LCA(node* root,int n1,int n2) {
    if(root == NULL) {
        return NULL;
    }

    if(root->data == n1 || root->data == n2) {
        return root;
    }

    node* left = LCA(root->left,n1,n2);
    node* right  = LCA(root->right,n1,n2);

    if(left && right) {
        return root;
    }

    if(left!=NULL) {
        return left;
    }

    if(right != NULL) {
        return right;
    }
}

int findDist(node* root,int key,int dis) {
    if(root==NULL) {
        return -1;
    }

    if(root->data == key) {
        return dis;
    }

    int left = findDist(root->left,key,dis+1);
    if(left != -1) {
        return left;
    }
    return findDist(root->right,key,dis+1);
}

int lowestDis(node* root,int n1,int n2) {
    node* lca = LCA(root,n1,n2);

    int d1 = findDist(lca,n1,0);
    int d2 = findDist(lca,n2,0);

    return d1+d2;
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

    cout << lowestDis(root,4,7);

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}