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
    int n;cin>>n;
    string s;cin>>s;
    string a="meow";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(n<4) {
        cout << "NO" << endl;return;
    }
    int i=0;int j=0;
    while(i<4 && j<n && a[i]==s[j]) {
        //deb2(a[i],s[j]);
        j++;
        if(a[i]!=s[j])i++;
    }
    //cout << endl << endl << endl;
    //deb2(i,j);
    if(i>=4 && j>=n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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