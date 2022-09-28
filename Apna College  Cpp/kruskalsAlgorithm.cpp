#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+6;

vector<int> parent(N);
vector<int> sz(N);

void make_set(int x) {
    parent[x] = x;
    sz[x]=1;
}

int find_set(int x) {
    if(x==parent[x]) {
        return x;
    }
    return parent[x]=find_set(parent[x]);
}

void union_set(int a,int b) {
    a = find_set(a);
    b = find_set(b);
    if(a!=b) {
        if(sz[a]<sz[b]) {
            swap(a,b);
        }
        parent[b]=a;
        sz[a] += sz[b];
    }
}

int main() {
    for(int i=0;i<N;i++) {
        make_set(i);
    }
    int n,e;
    cin >> n >> e;
    vector<vector<int>> edges;
    for(int i=0;i<e;i++) {
        int w,x,y;
        cin >> x >> y >> w;
        edges.push_back({w,x,y});
    }
    int cost=0;
    sort(edges.begin(),edges.end());
    for(auto i: edges) {
        if(find_set(i[1]) == find_set(i[2])) {
            continue;
        }
        else {
            cout << i[1] << " " << i[2] << endl;
            cost += i[0];
            union_set(i[1],i[2]);
        }
    }
    cout << endl << cost;
    return 0;
}