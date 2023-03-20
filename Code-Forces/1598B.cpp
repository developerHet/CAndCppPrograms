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
    vector<vi> v(n,vi (5,0));
    for(int i=0;i<n;i++) {
        for(int j=0;j<5;j++) {
            cin >> v[i][j];
        }
    }

    for(int i=0;i<5;i++) {
        for(int j=i+1;j<5;j++) {
            int cnt1 = 0;
            int cnt2 = 0;
            int both = 0;
            for(int s=0;s<n;s++) {
                if(v[s][i]) cnt1++;
                if(v[s][j]) cnt2++;
                if(v[s][j] && v[s][i]) both++;
            }
            
            if( cnt1>= n/2 && cnt2>=n/2 && cnt1+cnt2-both==n) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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