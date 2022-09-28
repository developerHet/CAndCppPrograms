#include <bits/stdc++.h>
using namespace std;

 
 
int areaOfIsland(vector<vector<int>> &grid,int i,int j) {
    int  n = grid.size();
    int m = grid[0].size();
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0) {
        return 0;
    }
    
    grid[i][j]=0;
    int count = 1;
    count+=areaOfIsland(grid,i+1,j);
    count+=areaOfIsland(grid,i-1,j);
    count+=areaOfIsland(grid,i,j+1);
    count+=areaOfIsland(grid,i,j-1);
    return count;
}


 
 
int main() {
    vector<vector<int>> grid = {
    {0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},
    {0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}
    };

    int  n = grid.size();
    int m = grid[0].size();
    int ans = 0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(grid[i][j]==1) {
                ans = max(ans,areaOfIsland(grid,i,j));
            }
        }
    }
    cout << ans;
    return 0;
}