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
 
void rotateArray(vi &a,int l,int r,int offset) {
    vi c=a;
    for(int i=0;l+offset+i<=r;i++) {
        a[l+i]=c[l+offset+i];
    }
    for(int i=offset-1;i>=0;i--) {
        a[r-i]=c[l++];
    } 
}
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    vector<vi> action;
    vi s=a;
    sort(all(s));
    for(int i=0;i<n;i++) {
        int mx = s[n-i-1];
        int idx;
        for(int j=n-i-1;j>=0;j--) {
            if(a[j]==mx){
                idx=j;
                break;
            }
        } //deb(idx);
        if(idx!=n-i-1) {
            action.push_back({idx+1,n-i,1});
            rotateArray(a,idx,n-i-1,1);
        }
    }
    cout << action.size() << endl;
    for(auto x:action) {
        cout << x[0] << " " << x[1] << " " << x[2] << endl; 
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