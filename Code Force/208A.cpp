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
    string s;
    cin >> s;

    // First approach
    // int i=0;
    // string ans;
    // while(i<s.length()) {
    //     if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
    //         i+=3;
    //         ans+=" ";
    //     }  else {
    //         ans+=s[i];
    //         i++;
    //     }
    // }
    // cout << ans << endl;

    // Second methode

    regex r("WUB");
    cout << regex_replace(s,r," ") << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}