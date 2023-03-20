#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;

    vector<int> suff(n);
    if(s[n-1]=='g') suff[n-1]=n-1;
    else suff[n-1]=-1;

    for(int i=n-2;i>=0;i--) {
        if(s[i]=='g')suff[i]=i;
        else suff[i]=suff[i+1];
    }

    int ans = 0;
    for(int i=0;i<n;i++) {
        if(s[i]==c){
        if(suff[i]==-1) {
            ans=max(ans,n+suff[0]-i);
        } else {
            ans=max(ans,suff[i]-i);
        }
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