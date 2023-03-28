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
 
int lcm(int a, int b)
{
    return a*b / __gcd(a, b);
}
 
void solve() {
    int n;cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i],cin>>b[i];
    //for(int i=0;i<n;i++) cin >> b[i];
    int upper = a[0]*b[0],lower=b[0];
    int ans=1;
    for(int i=1;i<n;i++) {
        upper=__gcd(upper,a[i]*b[i]);
        lower=lcm(lower,b[i]);
        if(upper%lower==0) continue;
        upper=a[i]*b[i];
        lower=b[i];
        ans++;
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