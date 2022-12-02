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
    string s;
    cin >> s;
    
    string check="Yes";
    
    int i=-1;

    int n = s.length();

    if(s[0]=='Y') {
        i=0;
    } else if(s[0]=='e') {
        i=1;
    } else if(s[0]=='s') {
        i=2;
    }

    if(i==-1) {
        //deb(i);
        cout << "NO" << endl;
        return;
    }
    for(int j=0;j<n;j++) {
        if(s[j]!=check[i%3]) {
            //deb2(s[j],check[i%3]);
            cout << "NO" << endl;
            return;
        }
        i++;
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