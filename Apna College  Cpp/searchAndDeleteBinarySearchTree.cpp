#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

};

node* insertBST(node* root,int val) {
    if(root == NULL) {
        return new node (val);
    }

    if(val < root->data ) {
        root->left = insertBST(root->left,val);
    }

    if(val > root->data) {
        root->right = insertBST(root->right,val);
    }

    return root;
}


node* searchInBST(node* root, int key) {

    if(root == NULL) {
        return NULL;
    }
    else if(root->data == key) {
        return root;
    }
    else if(root->data < key) {
        searchInBST(root->right , key);
    }
    else {
        searchInBST(root->left, key);
    }
}

node* inOrderSucc(node* root) {
    node* curr = root;
    while(curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

node* deletionInBST(node* root, int key) {
    if(root == NULL) {
        return NULL;
    }
    else if(root->data > key) {
        root->left = deletionInBST(root->left,key);
    }
    else if(root->data < key) {
        root->right = deletionInBST(root->right,key);
    }
    else {
        if(root->right == NULL && root->left == NULL) {
            delete root;
            root = NULL;
        }
        else if(root->right == NULL) {
            node* temp = root;
            root = root->left;
            delete  temp;
        }
        else if(root->left == NULL) {
            node* temp = root;
            root = root->right;
            delete temp;
        }
        else {
            node* temp = inOrderSucc(root->right);
            root->data = temp->data;
            root->right = deletionInBST(root->right,temp->data);
        }
    }
    return root;
}

void inOrder(node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    // search

    if(searchInBST(root,10)==NULL) {
        cout << "Element not available" << endl;
    }
    else
    {
        cout << "Element available" << endl;
    }

    //delete

    root = deletionInBST(root,3);
    
    inOrder(root);

    return 0;

    /* 
                5
               / \
              1   7
               \
                3
               / \
              2   4
    
    
    */
}