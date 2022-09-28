#include <bits/stdc++.h>
using namespace std;

bool isValid(int x,int y,int n,int m) {
    if(x<0||y<0||x>=n||y>=m) return false;
    return true;
}

int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int,int>> q;
    int count = 0;
    int total=0;
    int day=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(grid[i][j]!=0) {
                total++;
            }
            if(grid[i][j]==2) {
                q.push({i,j});
            }
        }
    }
   
    while(!q.empty()) {
       int k=q.size();
       count+=k;
       while(k--) {
            int x = q.front().first;
        int y = q.front().second;
        
        if(isValid(x+1,y,n,m) && grid[x+1][y]==1) {
            grid[x+1][y]=2;
            q.push({x+1,y});
            
        }
        if(isValid(x-1,y,n,m) && grid[x-1][y]==1) {
            grid[x-1][y]=2;
            q.push({x-1,y});
            
        }
        if(isValid(x,y+1,n,m) && grid[x][y+1]==1) {
            grid[x][y+1]=2;
            q.push({x,y+1});
            
        }
        if(isValid(x,y-1,n,m) && grid[x][y-1]==1) {
            grid[x][y-1]=2;
            q.push({x,y-1});
            
        }
        q.pop();
       }
       if(!q.empty()) {day++;}
    }
    return total == count ? day : -1;
}

int main() {
    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};
    cout << orangesRotting(grid);
    return 0;
}