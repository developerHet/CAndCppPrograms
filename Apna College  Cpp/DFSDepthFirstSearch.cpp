#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<int> adjL[N];
int vis[N]={false};

void dfs(int node) {
    vis[node] = true;
    for(int x: adjL[node]) {
        if(!vis[x]) {
            dfs(x);
        }
    }
    cout << node << " ";
}

int main() {
    int n,e;
    cin >> n >> e;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        adjL[x].push_back(y);
        adjL[y].push_back(x);
    }
    dfs(1);
    return 0;   
}