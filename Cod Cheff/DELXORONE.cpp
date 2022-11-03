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
 
bool isPowTwo(int x)
{
    return x && (!(x & (x - 1)));
}
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int mx=INT_MIN;
    sort(all(a));
    int cnt = 1;
    for(int i=1;i<n;i++) {
        if(a[i-1]==a[i] || (a[i-1]!=0 && a[i-1]%2==0 && a[i-1]+1==a[i])) {
            //deb2(a[i-1],a[i]);
            cnt++;
           
        } else {
            mx = max(cnt,mx);
            cnt = 1;
        }
    }
     //deb(mx);
    mx = max(cnt,mx);
    cout << n-mx << endl;
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