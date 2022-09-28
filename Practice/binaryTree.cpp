#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left, *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *createTree()
{
    int data;
    cout << "Enter Data: ";
    cin >> data;
    if (data == -1)
        return NULL;
    Node *root = new Node(data);
    cout << "Left Node Detail of " << data << endl;
    ;
    root->left = createTree();
    cout << "Right Node Detail of " << data << endl;
    root->right = createTree();

    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node *root)
{
    if (root != NULL)
    {
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++)
            {
                Node *node = q.front();
                q.pop();
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        for(int i=0;i<ans.size();i++) {
            for(int j=0;j<ans[i].size();j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    Node *root = createTree();
    cout << endl
         << endl
         << "Preorder:" << endl;
    preorder(root);
    cout << endl;
    cout << endl
         << endl
         << "Inorder:" << endl;
    inorder(root);
    cout << endl;
    cout << endl
         << endl
         << "Postorder:" << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    return 0;
}