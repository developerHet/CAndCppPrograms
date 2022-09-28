#include <bits/stdc++.h>
using namespace std;

bool isCycle(vector<vector<int>> &adj,vector<bool> &visited,int src, int parent) {
    visited[src] =true;
    for(int x: adj[src]) {
        if(x != parent) {
            if(visited[x]) {
                return true;
            }
            if(!visited[x] && isCycle(adj,visited,x,src)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n,e;
    cin >> n >> e;
    vector<vector<int>> adj(n);
    for(int i=0;i<e;i++) {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool cycle = false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++) {
        if(!visited[i] && isCycle(adj,visited,i,-1)) {
            cycle = true;
        }
    }
    if(cycle) {
        cout << "Cycle is present";
    }
    else {
        cout << "Cycle is not present";
    }
    return 0;
}