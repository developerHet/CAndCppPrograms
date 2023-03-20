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
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=1;i<n-1;i++) {
        if(s[i-1]=='a' && s[i]=='b' && s[i+1]=='c') {
            cnt++;
        }
    }

    while(q--) {
        int x;
        char c;
        cin >> x >> c;
        x--;

        cnt-= (x-1>=0 && x+1<n && s[x-1]=='a' && s[x]=='b' && s[x+1]=='c');
        cnt-= (x-2>=0 && s[x-2]=='a' && s[x-1]=='b' && s[x]=='c');
        cnt-= (x+2<n && s[x]=='a' && s[x+1]=='b' && s[x+2]=='c');
        s[x]=c;
        cnt+= (x-1>=0 && x+1<n && s[x-1]=='a' && s[x]=='b' && s[x+1]=='c');
        cnt+= (x-2>=0 && s[x-2]=='a' && s[x-1]=='b' && s[x]=='c');
        cnt+= (x+2<n && s[x]=='a' && s[x+1]=='b' && s[x+2]=='c');

        cout << cnt << endl;
    }
}
 
 
 
int main() {
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