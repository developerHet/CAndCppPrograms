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
    vi odd,even;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]%2) odd.push_back(i+1);
        else even.push_back(i+1);
    }
    cout << n-1 << endl;
    if(a[0]%2) {
        
        if(odd.size()>1)for(int i=odd.size()-2;i>=0;i--) cout << odd[i] << " " << odd[i+1] << endl;
        for(int i=0;i<even.size();i++) cout << 1 << " " << even[i] << endl;
    } else {
        if(even.size()>1)for(int i=even.size()-2;i>=0;i--) cout << even[i] << " " << even[i+1] << endl;
        for(int i=0;i<odd.size();i++) cout << 1 << " " << odd[i] << endl;
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