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
    string a,b;
    cin >> a >> b;
    
    int same = 0;
    for(int i=0;i<n;i++) {
        if(a[i]==b[i]) {
            same++;
        }
    }
    if(same!=0 && same!=n) {
        cout << "NO" << endl;
        return;
    }
    int step=0;
    vpii idx;
    for(int i=0;i<n;) {
        if(a[i]=='1') {
            int j = i;
            while(i<n && a[i]==a[j]) {
                i++;
            }
            step++;
            idx.pb({j+1,i});
        } else {
            i++;
        }
    }

    if(same==n && step%2==1) {
        idx.pb({1,n});
        idx.pb({1,1});
        idx.pb({2,n});
    } else if(same==0 && step%2==0) {
        idx.pb({1,n});
        idx.pb({1,1});
        idx.pb({2,n});
    }
    cout << "YES" << endl << idx.size() << endl;
    for(int i=0;i<idx.size();i++) {
        cout << idx[i].F << " " << idx[i].S << endl;
    }
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