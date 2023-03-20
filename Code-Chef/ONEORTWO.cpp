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
    int p1,p2;
    cin >> p1 >> p2;
  if(p1+1==p2 || p1==p2) {
    if(p1%2) {
        cout << "CHEF" << endl;
        return;
    } else {
        cout << "CHEFINA" << endl;
        return;
    } 
  } else if(p1==p2+1) {
    if(p1%2==0) {
        cout << "CHEF" << endl;
        return;
    } else {
        cout << "CHEFINA" << endl;
        return;
    }
  } else  {
     if(p1>p2) {
        cout << "CHEF" << endl;
        return;
     } else {
        cout << "CHEFINA" << endl;
     }
  }
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