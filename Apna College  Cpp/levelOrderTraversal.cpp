#include <iostream>
#include <queue>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }

};

void levelOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        if(node!=NULL) {
            cout << node->data << " ";
            if(node->left!=NULL) {
                q.push(node->left);
            }
            if(node->right!=NULL) {
                q.push(node->right);
            }
        }
        else if (!q.empty()) {
            q.push(NULL);
        }
    }
}


int sumAtk(Node* root,int k) {
    if(root == NULL) {
        return -1;
    }
    queue<Node*> q;
    int level = 0;
    int sum = 0;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        if(node) {
            if(k==level) {
                sum += node->data;
            }
            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
        }
        else if (!q.empty()) {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}


int main() {
    Node *root;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    levelOrder(root);

    //Sum at Kth Level
    cout << endl << sumAtk(root,2);
    return 0;




    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
}