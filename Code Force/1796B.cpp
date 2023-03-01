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
    string a,b;
    cin >> a >> b;
    int n=a.length(),m=b.length();
    if(a[0]==b[0]) {
        cout << "YES" << endl;
        cout << a[0] << "*" << endl;
        return;
    } else if(a[n-1]==b[m-1]) {
        cout << "YES" << endl;
        cout << "*" << a[n-1]  << endl; 
        return;
    } 
    for(int i=1;i<n;i++) {
        for(int j=1;j<m;j++) {
            if(a[i-1]==b[j-1] && a[i]==b[j]) {
                cout << "YES" << endl;
                cout << "*" << a[i-1] << a[i] << "*" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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