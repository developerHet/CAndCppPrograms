#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

node *constructTree(int preOrder[], int *preOrderIndx, int key, int min, int max, int n)
{
    if (*preOrderIndx >= n)
    {
        return NULL;
    }
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preOrderIndx = *preOrderIndx + 1;

        if (*preOrderIndx < n)
        {
            root->left = constructTree(preOrder, preOrderIndx, preOrder[*preOrderIndx], min, key, n);
        }
        if (*preOrderIndx < n)
        {
            root->right = constructTree(preOrder, preOrderIndx, preOrder[*preOrderIndx], key, max, n);
        }
    }

    return root;
}

void printPreOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main()
{
    int preOrder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preOrderIndx = 0;
    node *root = constructTree(preOrder, &preOrderIndx, preOrder[preOrderIndx], INT_MIN, INT_MAX, n);
    printPreOrder(root);
    return 0;
}