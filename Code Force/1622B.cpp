#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


typedef pair<int, int>  pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll MOD=1000000007;
 
static bool cmp (pii &a,pii &b) {
    return a.F>b.F;
} 

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<pii> like,dislike;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') like.push_back({a[i],i});
        else dislike.push_back({a[i],i});
    }

    sort(all(like),cmp);
    sort(all(dislike),cmp);
    int j = n;
    vi ans(n);
    for(int i=0;i<like.size();i++) {
        ans[like[i].S] = j--;
    }
    for(int i=0;i<dislike.size();i++) {
        ans[dislike[i].S] = j--;
    }

    for(auto x: ans) {
        cout << x << " ";
    } cout << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}