#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 3;
vector<vector<int>> adj[N];
vector<int> dis,parent;
vector<bool> vis;
int cost=0;

void prims(int src) {
    set<vector<int>> s;
    dis[src]=0;
    s.insert({src,0});
    while(!s.empty()) {
        auto x = *(s.begin());
        s.erase(x);
        vis[x[0]] = true;
        int u = x[0];
        int v = parent[x[0]];
        int w = x[1];
        cout << u << " " << v <<" " << w << endl;
        for(auto i: adj[x[0]]) {
            if(vis[i[0]]) {
                continue;
            }
            if(dis[i[0]] > i[1]) {
                s.erase({i[0],dis[i[0]]});
                dis[i[0]] = i[1];
                s.insert({i[0],dis[i[0]]});
                parent[i[0]] = x[0];
            }
        }
    }
    cout << cost;

}

int main()
{
    int n, e;
    cin >> n >> e;
    dis = vector<int> (n,INT_MAX);
    parent = vector<int> (n);
    vis = vector<bool> (n,false);
    for(int i=0;i<e;i++) {
        int x,y,w;
        cin >> x >> y >> w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    prims(0);
    return 0;
}