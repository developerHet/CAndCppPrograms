#include <iostream>
#include <stack>
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

void zigZagTraversal(node* root) {
    stack<node*> currStack;
    stack<node*> nexLevelStack;

    bool leftToRight = true;

    currStack.push(root);

    while(!currStack.empty()) {
        node* temp = currStack.top();
        currStack.pop();
        if(temp) {
            cout << temp->data << " ";
            if(leftToRight) {
                if(temp->left) {
                    nexLevelStack.push(temp->left);
                }
                if(temp->right) {
                    nexLevelStack.push(temp->right);
                }
            }
            else {
                if(temp->right) {
                    nexLevelStack.push(temp->right);
                }
                if(temp->left) {
                    nexLevelStack.push(temp->left);
                }
            }
        }
        if(currStack.empty()) {
            swap(currStack,nexLevelStack);
            leftToRight = !leftToRight;
        }
    }
}


int main() {
    node *root;
    root = new node(4);
    root->left = new node(2);
    root->right = new node(6);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->left = new node(5);
    root->right->right = new node(7);

    zigZagTraversal(root);

    /*     4
         /   \
        2     6
       / \   / \
      1   3 5   7    */
    
    return 0;
}