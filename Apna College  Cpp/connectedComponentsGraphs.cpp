#include <bits/stdc++.h>
using namespace std;

int n,e;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> comp;

int getCount(int i) {
    if(vis[i]) {
        return 0;
    }
    vis[i]=true;
    int ans=1;
    for(auto x: adj[i]) {
        if(!vis[x]) {
            ans += getCount(x);
            vis[x] = true;
        }
    }
    return ans;
}

int main() {
    cin >> n >> e;
    adj = vector<vector<int>> (n);
    vis = vector<bool> (n,false);
    for(int i=0;i<e;i++) {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<n;i++) {
        if(!vis[i]) {
            comp.push_back(getCount(i));
        }
    }
    for(auto x: comp) {
        cout << x << " ";
    }
    return 0;



    /*10 8
0 1
0 2
1 3
2 3
3 4
5 6
7 8
7 9*/
}