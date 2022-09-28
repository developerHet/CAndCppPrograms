#include <bits/stdc++.h>
using namespace std;

int n, e;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> color;
bool bipartite = true;

void isBipartite(int src, int parentColor)
{
    if(color[src] != -1 && color[src]!=parentColor) {
        bipartite=false;
        return;
    }
    color[src]=parentColor;
    if(vis[src]){
        return;
    }
    vis[src]=true;
    for(auto x: adj[src]) {
        isBipartite(x,parentColor xor 1);
    }
}
int main()
{
    cin >> n >> e;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    color = vector<int>(n, -1);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            isBipartite(i, 0);
        }
    }


    if (bipartite)
    {
        cout << "Graph is Bipartite";
    }
    else
    {
        cout << "Graph is Not Bipartite";
    }
    return 0;



    /*
10 15
0 1
0 5
0 4
1 2
1 6
5 7
5 9
4 8
4 3
6 8
6 9
8 7
7 2
9 2
2 3*/
}