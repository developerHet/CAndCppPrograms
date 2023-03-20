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
    int n;
    cin >>n;
    string s;
    cin >> s;
    
    int mx=INT_MIN;
    map<string,int> mp;
    int i=0;
    int ans = INT_MIN;
    for(int i=0;i<n;i++) {
        string x;
        x+=s[i];
        if(mp[x]==1) {
            ans=1;
        }
        mp[x]=1;
    }
    while(i<n) {
        char m = s[i];
        int cnt = 0;
        string curr="";
        while(i<n && m==s[i]) {
            cnt++;
            curr+=s[i];
            i++;
        }
        if(mp[curr]>0 && curr.length()>ans) {
            ans=curr.length();
        }
        mp[curr]=1;
        mx = max(cnt,mx);
    }
    cout << max(ans,mx-1) << endl;
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