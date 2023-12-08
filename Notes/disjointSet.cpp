#include <bits/stdc++.h>
using namespace std;

class DisJointSet {
    vector<int> parent;
    vector<int> rank;
    vector<int> size;
public:
    DisJointSet(int n) {
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) {
            parent[i]=i;
        }
    }

    int findParent(int node) {
        if(node==parent[node]) {
            return node;
        }
        return parent[node]=findParent(parent[node]);
    }

    void unionByRank(int u,int v) {
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);

        if(ulp_u==ulp_v) return;
        else if(rank[ulp_v]<rank[ulp_v]) {
            parent[ulp_v] = ulp_u;
        } else if(rank[ulp_u]<rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u,int v) {
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);
        if(ulp_u==ulp_v) return;
        else if(size[ulp_u]<size[ulp_v]) {
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        } else {
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }

};

int main() {
    DisJointSet ds(7);

    // // Union by Rank
    // ds.unionByRank(1,2);
    // ds.unionByRank(2,3);
    // ds.unionByRank(4,5);
    // ds.unionByRank(6,7);
    // ds.unionByRank(5,6);

    // // if 3 & 7 are same or not

    // if(ds.findParent(3)==ds.findParent(7)) cout << "Same" << endl;
    // else cout << "Not Same" << endl;

    // ds.unionByRank(3,7);

    // if(ds.findParent(3)==ds.findParent(7)) cout << "Same" << endl;
    // else cout << "Not Same" << endl;



    // Union by Size
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);

    // if 3 & 7 are same or not

    if(ds.findParent(3)==ds.findParent(7)) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    ds.unionBySize(3,7);

    if(ds.findParent(3)==ds.findParent(7)) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    return 0;
}