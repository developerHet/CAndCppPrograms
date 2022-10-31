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
 
 
bool check(int val,vi a,int n) {
    //remove(all(a),val);
    int i = 0;
    int j = a.size()-1;
    while(i<=j) {
        while(i+1<n && a[i]==val) i++;
        while(j-1>=0 && a[j]==val) j--;
        if(a[i]!=a[j]) return false;
        i++;
        j--;
    }
    return true;
} 
 
void solve() {
    int n;
    cin >> n;
 
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
 
    for(int i=0;i<n/2;i++) {
        if(a[i]!=a[n-i-1]) {
            if(check(a[i],a,n) || check(a[n-i+1],a,n)) {
                cout << "YES" << endl;
                return;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl; 
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