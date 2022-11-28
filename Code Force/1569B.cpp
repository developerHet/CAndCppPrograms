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
    cin >> n;
    string s;
    cin >> s;
    vi two;
    for(int i=0;i<n;i++) {
        if(s[i]=='2') two.push_back(i);
    }

    if(two.size()<3 && !two.empty()) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<vector<char>> action(n,vector<char>(n,'.'));
    int size = two.size();
    for(int i=0;i<size;i++) {
        action[two[i]][two[(i+1)%size]]='+';
        action[two[(i+1)%size]][two[i]]='-';
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) action[i][j]='X';
            else if(action[i][j]=='.') action[i][j]='=';
        }
    } 
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
           cout << action[i][j];
        } cout << endl;
    } 
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