#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* right;
    node* left;

    node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int searchPos(int inOrder[],int start,int end,int curr) {
    for(int i=start;i<=end;i++) {
        if(inOrder[i]==curr) {
            return i;
        }
    }
    return -1;
}

node* buildTree(int preOrder[],int inOrder[], int start, int end) {
    static int indx = 0;

    if(start > end) {
        return NULL;
    }

     

    int curr = preOrder[indx];
    indx++;
    node* root = new node(curr);
    if(start==end) {
        return root;
    }
    int pos = searchPos(inOrder,start,end,curr);

    root->left = buildTree(preOrder,inOrder,start,pos-1);
    root->right = buildTree(preOrder,inOrder,pos+1,end);

    return root;
}

void inorderPrint(node* root) {
    if(root == NULL) {
        return;
}
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main() {
    int preOrder[] ={1,2,4,3,5};
    int inOrder[] = {4,2,1,5,3};
    node* root = buildTree(preOrder,inOrder,0,4);
    inorderPrint(root);
    return 0;
}