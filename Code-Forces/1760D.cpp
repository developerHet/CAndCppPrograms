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
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    vi v;
    v.pb(a[0]);

    for(int i=1;i<n;i++) {
        if(v[v.size()-1]!=a[i]) v.push_back(a[i]);
    }
    //for(auto x:v) cout << x << " ";
    //cout << endl;
    if(v.size()==1) {cout << "YES" << endl;return;}

    int cnt=0;
    if(v[0]<v[1]) cnt++;
    if(v[v.size()-2]>v[v.size()-1]) cnt++;

    for(int i=1;i<v.size()-1;i++) {
        if(v[i-1]>v[i] && v[i] < v[i+1]) cnt++;
    }

    //cout << cnt << endl;
    if(cnt==1) cout << "YES" << endl;
    else  cout << "NO" << endl;
    /*
3 2 1 2 3 
1 2 3 4 5 6 
1 2 3 4 3 2 1 
9 7 4 6 9 10 
1000000000 
9 4 5 9 4 9 10 
3 2 
1 5 3 2 
1 2 
2 1
    */
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