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
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    s1.erase(remove( s1.begin(),s1.end(),' '),s1.end());
    s2.erase(remove( s2.begin(),s2.end(),' '),s2.end());
    int n= s1.length(),m=s2.length();
    sortall(s1);
    sortall(s2);
    int i=0,j=0;
    //deb2(s1,s2);
    while(i<n && j<m) {
        if(s1[i]==s2[j])i++,j++;
        else i++;
    }
    //deb2(i,j);
    if(j==m) cout << "YES" << endl;
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