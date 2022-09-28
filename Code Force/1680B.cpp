#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> robot;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            char x;
            cin >> x;
            if(x=='R') {
                robot.push_back({i,j});
            }
        }
    }
    // for(int i=0;i<robot.size();i++) {
    //     cout << robot[i].first << "->" << robot[i].second << endl;
    // }
    bool mark = false;
    for(int i=0;i<robot.size();i++) {
        mark = true;
        for(int j=0;j<robot.size();j++) {
            if(robot[i].first <= robot[j].first && robot[i].second <= robot[j].second) {
                continue;
            } else {
                mark=false;
                break;
            }
        }
        if(mark) {
            break;
        }
    }
    if(mark) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}