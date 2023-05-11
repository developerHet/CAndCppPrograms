#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


typedef pair<int, int>  pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

int MOD=1000000007;

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size(); 
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans =0 ;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int count  = 0;
                if(grid[i][j] && !vis[i][j]) {
                    vis[i][j]=1;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    count+=grid[i][j];
                    while(!q.empty()) {
                        int  a = q.front().first;
                        int  b = q.front().second;
                        q.pop();
                        
                        int r[] = {-1, 1, 0, 0};
                        int c[] = {0, 0, 1, -1};
                        
                        for(int z=0; z<4; z++) {
                           int x = a + r[z];
                           int y = b + c[z]; 
                           if (x>=0 && y>=0 && x<n && y<m && grid[x][y] && !vis[x][y]) {
                               vis[x][y]=1;
                               q.push({x,y});
                               count+=grid[x][y];
                           }
                        }
                        
                    }
                    ans = max(ans,count);
                }
            }
        }
        return ans;
    } 
 
 
void solve() {
    int n,m; cin >> n >> m;
    vvi grid(n, vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> grid[i][j];
        }
    }
    cout << maxAreaOfIsland(grid) << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}