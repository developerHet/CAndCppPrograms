#include <bits/stdc++.h>
using namespace std;


bool checkValid(int x,int y,int m,int n) {
    if(x<0 || y<0 || x>=n || y>=m) return false;
    return true;
}


updateMatrix(vector<vector<int>> &mat)
{
    
    int n = mat.size();
    int m = mat[0].size();
    queue<pair<int,int>> q;
    vector<vector<int>> ans(n,vector<int>(m,-1));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(mat[i][j]==0) {
                ans[i][j]=0;
                q.push({i,j});
            }
        }
    }
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        if(checkValid(x+1,y,m,n) && ans[x+1][y]==-1) {
            q.push({x+1,y});
            ans[x+1][y]=ans[x][y]+1;
        }
        if(checkValid(x-1,y,m,n) && ans[x-1][y]==-1) {
            q.push({x-1,y});
            ans[x-1][y]=ans[x][y]+1;
        }
        if(checkValid(x,y+1,m,n) && ans[x][y+1]==-1) {
            q.push({x,y+1});
            ans[x][y+1]=ans[x][y]+1;
        }
        if(checkValid(x,y-1,m,n) && ans[x][y-1]==-1) {
            q.push({x,y-1});
            ans[x][y-1]=ans[x][y]+1;
        }
        q.pop();
    }

}

int main()
{
    vector<vector<int>> mat = {{0, 0, 0}, {0, 1, 0}, {1, 1, 1}};
    updateMatrix(mat);
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << mat[i][j] << " ";
        } cout << endl;
    }
    return 0;
}
