#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int main() {
    vector<int> adjL[N];
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int x, y;
        cin >> x >> y;
        adjL[x].push_back(y);
        adjL[y].push_back(x);
    }
    for(int i=1;i<n+1;i++) {
        cout << i << " -> ";
        for(int x: adjL[i]) {
            cout << x << " ";
        } cout << endl;
    }
    return 0;
}