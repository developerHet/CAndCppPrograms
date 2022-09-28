#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;
    vector<vector<int>> edges;
    for(int i=0;i<e;i++) {
        int x,y,w;
        cin >> x >> y >> w;
        edges.push_back({x,y,w});
    }
    int src;
    cin >> src;
    vector<int> dis(n,INT_MAX);
    dis[src] = 0;
    for(int i=0;i<n-1;i++) {
        for(auto e: edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dis[v] = min(dis[v],dis[u]+w);
        }
    }
    for(int i: dis) {
        cout << i << " ";
    }
    return 0;
}
/*
5 8
1 2 3
3 2 5
1 3 2
3 1 1
1 4 2
0 2 4
4 3 -3
0 1 -1
0
*/