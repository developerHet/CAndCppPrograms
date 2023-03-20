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

    // Method 1
    // int n;cin >> n;
    // int a=1,b=0;
    // int i=2;
    // n--;
    // bool flag = true;
    // while(n-(2*i+1)>=0) {
    //     if(flag) {
    //         b+=(2*i+1);
    //         flag = false;
    //     } else {
    //         a+=(2*i+1);
    //         flag = true;
    //     }
    //     n-=(2*i+1);
    //     i+=2;
    // }
    // if(n) {
    //     if(flag) {
    //         b+=n;
    //     } else {
    //         a+=n;
    //     }
    // }
    // cout << a << " " << b <<endl;

    // Method 2
    int n;cin >> n;
    int a=0,b=0;
    int c=1;
    while(n>0) {
        if((c/2)%2==0) a+=min(n,c);
        else b+=min(n,c);
        n-=c;
        c++;
    }
    cout << a << " " << b << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}