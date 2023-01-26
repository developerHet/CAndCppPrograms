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

    //First Approch
    // string s;
    // cin >> s;
    // map<string,int> mp;
    // int n=s.length();
    // mp["1"]=1;mp["14"]=1;mp["144"]=1;
    // for(int i=0;i<n;i++) {
    //     string x;
    //     if(i+2<n && mp[x+s[i]+s[i+1]+s[i+2]]==1) i+=2;
    //     else if(i+1<n && mp[x+s[i]+s[i+1]]==1) i+=1;
    //     else if(mp[x+s[i]]==1) continue;
    //     else {cout << "NO" << endl;return;}
    // }
    // cout << "YES" << endl;


    // Second Approch

    // int n;
    // cin >> n;
    // while(n) {
    //     if(n%10!=1 && n%100!=14 && n%1000!=144){cout << "NO" << endl;return;}
    //     n/=10;
    // }
    // cout << "YES" << endl;


    // Third Approch
    string s;
    cin >> s;
    regex r("((1)|(14)|(144))*");
    cout << (regex_match(s,r)?"YES":"NO") << endl;
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