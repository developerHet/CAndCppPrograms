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
    int n,a,b;
    cin >> n >> a >> b;

    if(n==1){
        cout<<(a==b)<<"\n"<<a<<":"<<b<<"\n";
        return;
    } else if(a+b<n) {
        int z = n-(a+b);
        cout << z << endl;
        int x=a, y=b;
        while(x--) {
            cout << 1 << ":" << 0 << endl;
        }
        while(y--) {
            cout << 0 << ":" << 1 << endl;
        }
        while(z--) {
            cout << 0 << ":" << 0 << endl;
        }
    } else if(a+b>=n && (a==0 || b==0)) {
        cout << 0 << endl;
        if(a==0) {
            for(int i=0;i<n-1;i++) {
                cout << 0 <<":" << 1 << endl;
                b--;
            }
            cout << 0 <<":" << b << endl;
        } else {
            for(int i=0;i<n-1;i++) {
                cout << 1 <<":" << 0 << endl;
                a--;
            }
            cout << a <<":" << 0 << endl;
        }
    } else {
        vvi v(n,vi(2));
        v[0][0]=1;
        v[1][1]=1;
        a--;
        b--;
        for(int i=2;i<n;i++) {
            if(a>0) {
                v[i][0]=1;
                a--;
            } else if(b>0) {
                v[i][1]=1;
                b--;
            }
        }
        v[0][0]+=a;
        v[1][1]+=b;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(v[i][0]==v[i][1]) cnt++;
        }
        cout << cnt << endl;
        for(int i=0;i<n;i++) {
            cout << v[i][0] << ":" << v[i][1] << endl;
        }
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