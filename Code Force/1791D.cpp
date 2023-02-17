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
 
 
 
void solve() {
    int n;cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    vi p(n);
    p[0]=1;
    mp[s[0]]=1;
    for(int i=1;i<n;i++) {
        if(mp.find(s[i])==mp.end())p[i]=p[i-1]+1,mp[s[i]]=1;
        else p[i]=p[i-1];
    }
    mp.clear();
    vi sf(n);
    sf[n-1]=1;
    mp[s[n-1]]=1;
    for(int i=n-2;i>=0;i--) {
        if(mp.find(s[i])==mp.end())sf[i]=sf[i+1]+1,mp[s[i]]=1;
        else sf[i]=sf[i+1];
        //deb(sf[i]);
    }
    int ans=0;
    for(int i=1;i<n;i++) {
        //deb2(p[i-1],sf[i]);
        ans=max(ans,p[i-1]+sf[i]);
    }
    cout << ans << endl;
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