#include <iostream>
#include <vector>
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

vector<Node*> constructTree(int start, int end) {
    vector<Node*> trees;
    if(start > end) {
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++) {
        vector<Node*> leftSubtree = constructTree(start,i-1);
        vector<Node*> rightSubtree = constructTree(i+1,end);

        for(int j=0;j<leftSubtree.size();j++) {
            Node* left = leftSubtree[j];
            for(int k=0; k<rightSubtree.size();k++) {
                Node* right = rightSubtree[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        } 
    }
    return trees;
}

void preOrde(Node* root) {
    if(root==NULL) {
        return;
    }
    cout << root->data << " ";
    preOrde(root->left);
    preOrde(root->right);
}

int main() {
    vector<Node*> trees = constructTree(1,3);
    for(int i=0;i<trees.size();i++) {
        cout << i+1 << " : ";
        preOrde(trees[i]);
        cout << endl;
    }
    return 0;
}