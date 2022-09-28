#include <bits/stdc++.h>
using namespace std;

bool isCycle(vector<vector<int>> &adj,vector<bool> &visited,int src,vector<bool> &stack) {
  stack[src]=true;
  if(!visited[src]) {
      visited[src] = true;
      for(auto i: adj[src]) {
          if(!visited[i] && isCycle(adj,visited,i,stack)) {
              return true;
          }
          if(stack[i]) {
              return true;
          }
      }
  }
  stack[src] = false;
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
    }
    bool cycle = false;
    vector<bool> visited(n,false);
    vector<bool> stack(n,false);
    for(int i=0;i<n;i++) {
        if(!visited[i] && isCycle(adj,visited,i,stack)) {
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