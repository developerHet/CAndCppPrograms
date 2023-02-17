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
    int n,m;cin >> n >> m;
    string a,b;
    cin >> a >> b;
    if(a[n-1]==b[m-1]) {
        for(int i=0;i<n-1;i++) {
            if(a[i]==a[i+1]) {
                cout << "NO" << endl;
                return;
            }
        }
        for(int i=0;i<m-1;i++) {
            if(b[i]==b[i+1]) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    } else {
        int idx=-1;
        for(int i=0;i<n-1;i++) {
            if(a[i]==a[i+1]) {
                idx=i+1;
                break;
            }
        }
        if(idx!=-1) {
            string x = a.substr(idx,a.length());
            reverse(all(x));
            b+=x;
            for(int i=0;i<idx-1;i++) {
                if(a[i]==a[i+1]) {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i=0;i<b.length()-1;i++) {
                if(b[i]==b[i+1]) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        } else {
            for(int i=0;i<m-1;i++) {
                if(b[i]==b[i+1]) {
                    idx=i+1;
                    break;
                }
            }
            if(idx!=-1) {
            string x = b.substr(idx,b.length());
            reverse(all(x));
            a+=x;
            for(int i=0;i<idx-1;i++) {
                if(b[i]==b[i+1]) {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i=0;i<a.length()-1;i++) {
                if(a[i]==a[i+1]) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
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