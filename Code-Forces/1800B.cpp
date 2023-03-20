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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi a(26,0);
    vi c(26,0);
    for(int i=0;i<n;i++) {
        if(s[i]<=90) {
            c[s[i]-'A']++;
        } else {
            a[s[i]-'a']++;
        }
    }
    int cnt = 0;
    int can=0;
    for(int i=0;i<26;i++) {
        cnt+=min(a[i],c[i]);
        can+=((max(a[i],c[i])-min(a[i],c[i]))/2);
    }
    cout << cnt+min(can,k) << endl;
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