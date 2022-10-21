#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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
    int i, j, n, m;
    cin >> n;

    vi a(n);

    fo(i,n) {
        cin >> a[i];
    }

    sort(all(a));
    int k;
    Fo(k,n,0) {
        int r = n-1;
        int rounds = 0;
        int l = 0;

        while(rounds<k && r>=l) {
            bool found = false;
            l = rounds;

            while(!found && r>=l) {
                if(a[r]<=k+1-(rounds+1)) {
                    rounds++;
                    found = true;
                }
                r--;
            }
        }

        if(rounds==k) {
            cout << k << endl;
            return;
        }
    }

    cout << 0 << endl;
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