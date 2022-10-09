#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 

 
void solve() {
 int n,m;
 cin >> n >> m;
 vector<vi> v(n,vector<int>(m,0));

 for(int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
        cin >> v[i][j];
    }
 }

 auto sum = [&](int r,int c){
    int curr = v[r][c];
    int i = r-1,j=c-1;

    while(i>=0 && j>=0) {
        curr+=v[i--][j--];
    }

    i=r+1;j=c+1;
    while(i<n && j<m) {
        curr+=v[i++][j++];
    }

    i=r-1;j=c+1;
    while(i>=0 && j<m) {
        curr+=v[i--][j++];
    }

    i=r+1;j=c-1;
    while(i<n && j>=0) {
        curr+=v[i++][j--];
    }
    return curr;
 };

 int ans = INT_MIN;

 for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        int curr = sum(i,j);
        ans=max(ans,curr);
    }
 }
 cout << ans << endl;
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