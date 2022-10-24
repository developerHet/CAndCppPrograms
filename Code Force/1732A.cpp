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
    int allGcd=a[0];
    fo(i,n) {
        allGcd = __gcd(a[i],allGcd);
        if(allGcd==1) {
            cout << 0 << endl;
            return;
        }
    }

    int costFront = 0;
    int allGcdF = allGcd;
    Fo(i,n-1,-1)  {
        allGcdF = __gcd(i+1,allGcdF);
        costFront+=(n-i);
        if(allGcdF==1) {
            break;;
        }
    }


    int costBack = 0;
    Fo(i,n-1,-1) {
        if(__gcd(i+1,allGcd)==1) {
            costBack = n-i;
            break;
        }
    }
    //deb2(costBack,costFront);
    cout << min(costBack,costFront) << endl;
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