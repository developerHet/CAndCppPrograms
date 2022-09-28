#include <bits/stdc++.h>
using namespace std;
#define ll long long
 

void dfs(int i,int j,vector<vector<int>> &image,vector<vector<int>> &vis,int oldColor,int newColor,int m, int n){
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || image[i][j]!=oldColor) {
        return;
    }
    vis[i][j]=1;
    image[i][j]=newColor;
    dfs(i+1,j,image,vis,oldColor,newColor,m,n);
    dfs(i-1,j,image,vis,oldColor,newColor,m,n);
    dfs(i,j+1,image,vis,oldColor,newColor,m,n);
    dfs(i,j-1,image,vis,oldColor,newColor,m,n);
}
 
void solve() {
    vector<vector<int>> image= {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1, sc = 1, newColor = 2;
    int x = image.size();
    int y = image[0].size();
    vector<vector<int>> vis(x,vector<int>(y,0));
    int oldColor = image[sr][sc];
    dfs(sr,sc,image,vis,oldColor,newColor,y,x);
    for(int i=0;i<image.size();i++) {
        for(int j=0;j<image[i].size();j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}