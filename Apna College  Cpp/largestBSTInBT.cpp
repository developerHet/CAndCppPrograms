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

struct info {
    int size;
    int max;
    int min;
    int ans;
    bool isBSt;
};


info largestBST(node* root) {
    if(root == NULL) {
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left == NULL && root->right == NULL) {
        return {1,root->data,root->data,1,true};
    }

    info leftSide = largestBST(root->left);
    info rightSide = largestBST(root->right);

    info curr;
    curr.size = (1+leftSide.size + rightSide.size);

    if(leftSide.isBSt && rightSide.isBSt && leftSide.max < root->data && rightSide.min > root->data) {
        curr.min = min(leftSide.min, min(root->data,rightSide.min));
        curr.max = max(max(root->data,rightSide.max),leftSide.max);
        curr.isBSt = true;

        curr.ans = curr.size;
        return curr;
    }

    curr.ans = max(leftSide.ans,rightSide.ans);
    return curr;
}


int main() {
    node *root;
    root = new node(5);
    root->left = new node(3);
    root->right = new node(8);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(7);
    root->right->right = new node(9);


    cout << largestBST(root).ans;

    /*     5
         /   \
        3     8
       / \   / \
      2   4 7   9    */
    
    return 0;
}