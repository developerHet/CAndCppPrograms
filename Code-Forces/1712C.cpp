#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    //cout << "debug" << endl;
    vector<bool> zero(n+1,false);
    int last  = -1;
    for(int i=n-2;i>=0;i--) {
        if(v[i]>v[i+1]) {
            last = i;
            break;
        }
    }

    if(last==-1) {
        cout << 0 << endl;
        return;
    }

    for(int i=last;i>=0;i--) {zero[v[i]] = true;}
    for(int i=last+1;i<n;i++) {
        if(zero[v[i]]==true) last = i;
    }
    for(int i=0;i<=last;i++) {zero[v[i]] = true;}

    int ans = 0;

    for(int i=0;i<=n;i++) {
        if(zero[i]==true)ans++;
    }
   cout << ans  <<  endl;
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