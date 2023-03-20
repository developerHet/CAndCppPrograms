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
    string s;
    cin >> s;
    int l = 0;
    int r = n-1;
    bool flag = true;
    vi a;
    while(l<r) {
        while(l<n && l<r && s[l]!='1') {
            l++;
        }
        while(r>=0 && l<r && s[r]!='0') {
            r--;
        }
        if(l<r) {
            a.push_back(l);
            a.push_back(r);
            flag = false;
            l++;
            r--;
        }
    }

    if(flag) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
        sort(all(a));
        cout << a.size() << " ";
        for(int i=0;i<a.size();i++) {
            cout << a[i]+1 << " ";
        } cout << endl;
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