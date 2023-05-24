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
    int n,x,y;
    cin >> n >>x >>y;
    vpii v;
    for(int i=0;i<n;i++) {
        int ele;cin >> ele;
        v.push_back({ele,i+1});
    }
    sortall(v);
    reverse(all(v));

    int i=0;
    vi  a,b;
    while(i<n) {
        bool first = (a.size()+1)*x<=(b.size()+1)*y;
        if(first) a.push_back(v[i].second);
        else b.push_back(v[i].second);
        i++;
    }
    cout << a.size() << " ";
    for(auto e:a) cout << e << " ";
    cout << endl;
    cout << b.size() << " ";
    for(auto e:b) cout << e << " ";
    cout << endl;
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