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

int calcHight(node* root) {
    if(root == NULL) {
        return 0;
    }
    return max(calcHight(root->left),calcHight(root->right)) + 1;
}

int calcDiameter(node* root) {
    if(root == NULL) {
        return 0;
    }
    int lHight = calcHight(root->left);
    int rHight = calcHight(root->right);
    int curr = lHight + rHight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(curr,max(lDiameter,rDiameter));
}


// optimise methode

int calcDiameter(node* root,int* height) {

    if(root == NULL) {
        *height = 0;
        return 0;
    }
    int lh=0, rh=0;
    int lDiameter = calcDiameter(root->left,&lh);
    int rDiameter = calcDiameter(root->right,&rh);

    int curr = rh+lh+1;
    *height = max(rh,lh) + 1;

    return max(curr , max(lDiameter,rDiameter));
}

int main() {
    node *root;
    int *height;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);



    cout << calcHight(root) << endl;
    cout << calcDiameter(root) << endl;
    cout << calcDiameter(root,height) << endl;

    /*     1
         /   \
        2     3
       / \   / \
      4   5 6   7    */
    
    return 0;
}