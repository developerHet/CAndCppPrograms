#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Node {
    public:
    int key;
    Node* left;
    Node* right;
    Node(int val) {
        key = val;
        left = NULL;
        right = NULL;
    }
};

void getVerticalDis(Node* root,int hDis, map<int,vector<int>> &m) {
    if(root==NULL) {
        return;
    }
    m[hDis].push_back(root->key);
    getVerticalDis(root->right,hDis+1,m);
    getVerticalDis(root->left,hDis-1,m);
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    int hDis = 0;
    map<int, vector<int>> m;
    getVerticalDis(root,hDis,m);

    map<int,vector<int>> :: iterator it;
    for (it = m.begin(); it!=m.end(); it++)
    {
        for(int i=0;i<it->second.size();i++) {
            cout << it->second[i] << " ";
        } cout << endl;
    }
    
    return 0;
}