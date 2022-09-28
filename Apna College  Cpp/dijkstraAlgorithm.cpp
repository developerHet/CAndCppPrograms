#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,e;
    cin >> n >> e;
    vector<vector<pair<int,int>>> adj(n+1);
    vector<int> dis(n+1,INT_MAX);
    
    for(int i=0;i<e;i++) {
        int x,y,w;
        cin >> x >> y >> w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    set<pair<int,int>> s;
    int src;
    cin >> src;
    dis[src]=0;
    s.insert({src,0});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for(auto i: adj[x.first]) {
            if(dis[i.first] > dis[x.first]+i.second) {
                s.erase({i.first,dis[i.first]});
                dis[i.first] =  dis[x.first]+i.second;
                s.insert({i.first,dis[i.first]});
            }
        }
    }

    for(int i=1;i<=n;i++) {
        if(dis[i]<INT_MAX) {
            cout << dis[i] << " ";
        }
        else {
            cout << "-1 ";
        }
    }
    

    return 0;
}