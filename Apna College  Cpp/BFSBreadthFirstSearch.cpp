#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int main() {
    int n,e;
    cin >> n >> e;
    vector<int> arr[N];
    for(int i=0;i<e;i++) {
        int x,y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    queue<int> q;
    bool vis[N]={false};
    q.push(1);
    vis[1]=true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int x: arr[node]) {
            if(!vis[x]) {
            vis[x]=true;
            q.push(x);
            } 
        }
    }
    
    return 0;
}