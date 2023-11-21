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

int gcd(int a,int b) {
    if(!b) return a;
    return gcd(b,a%b);
} 

int lcm(vector<int> arr,int n) {
    int ans = arr[0];
    for(int i=1;i<n;i++) {
        ans = (ans*arr[i])/gcd(arr[i],ans);
    }
    return ans;
} 


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int mn = *min_element(arr.begin(),arr.end());
    int q = mn;
    auto it = find(arr.begin(),arr.end(),q);
    arr.erase(it);
    int ans = lcm(arr,n-1);
    cout << ans+q << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}