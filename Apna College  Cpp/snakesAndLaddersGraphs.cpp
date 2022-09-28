#include <bits/stdc++.h>
using namespace std;

int main() {
    int ladder,snakes;
    cin >> ladder;
    map<int,int> lad,snak;
    for(int i=0;i<ladder;i++) {
        int u,v;
        cin >> u >> v;
        lad[u]=v;
    }
    cin >> snakes;
    for(int i=0;i<snakes;i++) {
        int u,v;
        cin >> u >> v;
        snak[u]=v;
    }
    queue<int> q;
    q.push(1);
    vector<bool> vis(101,false);
    vis[1]=true;
    bool found = false;
    int count=0;
    while(!q.empty() && !found) {
        int sz = q.size();
        while(sz--) {
            int t=q.front();
            q.pop();
            for(int dice=1;dice<=6;dice++) {
                if(t+dice==100) {
                    found=true;
                }
                if(t+dice<=100 and lad[t+dice] and !vis[t+dice]) {
                    vis[lad[t+dice]] = true;
                    if(lad[t+dice]==100) {
                        found=true;
                    }
                    q.push(lad[t+dice]);
                }
                else if(t+dice<=100 and snak[t+dice] and !vis[t+dice]) {
                    vis[snak[t+dice]]=true;
                    if(snak[t+dice]==100) {
                        found = true;
                    }
                    q.push(snak[t+dice]);
                }
                else if(t+dice<=100 and !snak[t+dice] and !lad[t+dice] and !vis[t+dice]) {
                    vis[t+dice]=true;
                    q.push(t+dice);
                }
            }
        }
        count++;
    }
    if(found) {
        cout << count;
    }
    else {
        cout << "-1";
    }
    return 0;
}