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

// string repeat(string x,int n) {
//     string s;
//     for(int i=0;i<n;i++) {
//         s+=x;
//     }
//     return s;
// } 

 
void solve() {
    // First Method
    // int k;
    // cin >> k;
    // string s;
    // cin >> s;
    // map<char,int>mp;
    // for(int i=0;i<s.length();i++) {
    //     mp[s[i]]++;
    // }
    // string sub;
    // for(auto x:mp) {
    //     if(x.second%k) {
    //         cout << -1 << endl;
    //         return;
    //     }
    //     string u;
    //     u+=x.first;
    //     sub+=repeat(u,x.second/k);
    // }
    // cout << repeat(sub,k) << endl;

    // Second Method
    int k;string s,a,b;
    cin>>k>>s;
    sortall(s);
    for(int i=0;i<s.length();i+=k)a+=s[i];
    for(int i=0;i<k;i++)b+=a;
    a=b;
    sortall(a);
    if(s==a) cout << b << endl;
    else cout << -1 << endl;
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