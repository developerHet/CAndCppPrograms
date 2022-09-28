#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;
    vector<vector<int>> adj(n);
    vector<int> indeg(n,0);
    for(int i=0;i<e;i++) {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    queue<int> q;
    for(int i=0; i<n; i++) {
        if(indeg[i]==0) {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int node = q.front();
        cout << node  << " ";
        q.pop();
        for(int x: adj[node]) {
            indeg[x]--;
            if(indeg[x]==0) {
                q.push(x);
            }
        }
    }
    return 0;
}