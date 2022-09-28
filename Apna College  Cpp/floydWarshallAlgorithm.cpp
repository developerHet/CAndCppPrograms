#include <bits/stdc++.h>
using namespace std;

const int Inf = 1e9;

int main() {
    vector<vector<int>> graph= 
    {
        {0,5,Inf,10},
        {Inf,0,3,Inf},
        {Inf,Inf,0,1},
        {Inf,Inf,Inf,0}
    };
    int n = graph.size();
    vector<vector<int>> dis=graph;
    for(int k=0;k<n;k++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(dis[i][j]>dis[i][k]+dis[k][j]) {
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(dis[i][j]==Inf) {
                    cout <<"Inf ";
                }
                else {
                    cout << dis[i][j] << " ";
                }
            } cout << endl;
        }
}