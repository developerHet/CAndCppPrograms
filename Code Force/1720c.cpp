#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    string v[n];

    int oneCount = 0;
    int allZero = 0;

    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(v[i][j]=='1') oneCount++;
            else allZero++;
        }
    }

    int mx = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int zeroCount = 0;
            if(i-1>=0 && v[i-1][j]=='0') zeroCount++;
            if(j-1>=0 && i-1>=0 && v[i-1][j-1]=='0') zeroCount++;
            if(j-1>=0 && v[i][j-1]=='0') zeroCount++;
            if(v[i][j]=='0')zeroCount++;
            mx = max(zeroCount,mx);
        }
    }
   //cout << mx << endl;
   if(mx>=2) cout << oneCount << endl;
   else if(mx==0) cout << oneCount - 2 << endl;
   else if(mx==1) cout << oneCount - 1 << endl;
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