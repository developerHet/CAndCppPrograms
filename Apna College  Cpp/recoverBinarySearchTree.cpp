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

void swap(int* a,int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calcPointers(node* root,node** first,node** mid,node** last,node** prev) {
    if(root==NULL) {
        return;
    }

    calcPointers(root->left,first,mid,last,prev);
    if(*prev && root->data < (*prev)->data) {
        if(!(*first)) {
            *first = *prev;
            *mid = root;
        }
        else {
            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right,first,mid,last,prev);
}

void recoverBST(node* root) {
    node* first = NULL;
    node* mid = NULL;
    node* last = NULL;
    node* prev = NULL;

    calcPointers(root,&first,&mid,&last,&prev);
    if(first && last) {
        swap(&(first->data),&(last->data));
    }
    else {
        swap(&(first->data),&(mid->data));
    }
}

void inOrde(node* root) {
    if(root == NULL) {
        return;
    }
    inOrde(root->left);
    cout << root->data << " ";
    inOrde(root->right);
}

int main() {
    node *root;
    root = new node(5);
    root->left = new node(8);
    root->right = new node(3);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(7);
    root->right->right = new node(9);


    inOrde(root);
    cout << endl;
    recoverBST(root);
    inOrde(root);

    /*     5
         /   \
        3     8
       / \   / \
      2   4 7   9    */
    
    return 0;
}