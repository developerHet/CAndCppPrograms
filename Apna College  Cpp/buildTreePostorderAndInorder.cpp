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
        left = NULL;
        right = NULL;
    }
};

int searchPos(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node *buildTree(int postOrder[], int inOrder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int indx = 4;
    int curr = postOrder[indx];
    indx--;
    node* root = new node(curr);

    if (start == end)
    {
        return root;
    }
    int pos = searchPos(inOrder, start, end, curr);
    root->right = buildTree(postOrder, inOrder, pos + 1, end);
    root->left = buildTree(postOrder, inOrder, start, pos - 1);

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


int main()
{
    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};
    node *root = buildTree(postOrder, inOrder, 0, 4);
    inorderPrint(root);
    return 0;
}