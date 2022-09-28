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

int maxPathUtil(node* root,int &ans) {

    if(root == NULL) {
        return 0;
    }

    int left = maxPathUtil(root->left,ans);
    int right = maxPathUtil(root->right,ans);
    int result  = max(max(root->data,root->data+left+right),max(root->data+right,root->data+left));
    ans = max(result,ans);
    return max(root->data,max(root->data+left,root->data+right));
}


int maxPath(node* root) {
    int ans = INT_MIN;
    maxPathUtil(root,ans);
    return ans;
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

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */

    cout << maxPath(root);
    
    return 0;
}