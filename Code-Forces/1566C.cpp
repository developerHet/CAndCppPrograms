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
    string s,t;
    cin >> s >> t;
    int i = 0;
    int cnt = 0;
    while(i<n) {
        if((s[i]=='0' && t[i]=='1') || (s[i]=='1' && t[i]=='0')) {
            cnt+=2;
            i++;
        } else if (i+1<n && (((s[i]=='0' && t[i]=='0') && (s[i+1]=='1' && t[i+1]=='1')) || ((s[i]=='1' && t[i]=='1') && (s[i+1]=='0' && t[i+1]=='0')))) {
            cnt+=2;
            i+=2;
        } else if(s[i]=='0' && t[i]=='0') {
            cnt++;
            i++;
        } else {
            i++;
        }
    }

    cout << cnt << endl;
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