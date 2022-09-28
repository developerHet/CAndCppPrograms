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

bool isIdentical(node* root1, node* root2) {
    if(root1 == NULL && root2 == NULL) {
        return true;
    }
    else if(root1 == NULL || root2 == NULL) {
        return false;
    }
    else {
        bool con1 = (root1->data == root2->data);
        bool con2 = isIdentical(root1->left,root2->left);
        bool con3 = isIdentical(root1->right,root2->right);

        if(con1 && con2 && con3) {
            return true;
        }
        return false;
    }
}


int main() {
    node *root1;
    root1 = new node(1);
    root1->left = new node(2);
    root1->right = new node(3);
    root1->left->left = new node(4);
    root1->left->right = new node(5);
    root1->right->left = new node(6);
    root1->right->right = new node(7);

    node *root2;
    root2 = new node(1);
    root2->left = new node(2);
    root2->right = new node(3);
    root2->left->left = new node(4);
    root2->left->right = new node(5);
    root2->right->left = new node(6);
    root2->right->right = new node(7);

    cout << isIdentical(root1,root2);


    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}