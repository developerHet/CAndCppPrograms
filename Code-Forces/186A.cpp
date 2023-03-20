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
    
    // Approach 1

    // string s1,s2;
    // cin >> s1 >> s2;
    // int n=s1.length(),m=s2.length();
    // if(n!=m) {
    //     cout << "NO" << endl;
    //     return;
    // }
    // int i=0;
    // while(i<n && s1[i]==s2[i] ) i++;
    // if(i==n) {
    //     cout << "YES" << endl;
    // }
    // int j=n-1;
    // while(j>=0 && s1[j]==s2[j]) j--;
    // //deb2(i,j);
    // swap(s1[i],s1[j]);
    // if(s1==s2) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }

    // Approach 2

    string p, q;
    int a = 0;
    cin >> p >> q;
    if(p.size()!=q.size()) {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < p.size(); i++){
        if (p[i] != q[i])a++;
    }
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    if (a == 2 && p == q)cout << "YES" << endl;
    else cout << "NO" << endl;
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