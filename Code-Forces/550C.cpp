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
    string s;
    cin  >> s;
    int n = s.length();
    for(int i=0;i<n;i++) {
        if((s[i]-'0')%8==0) {
            
            cout << "YES" << endl;
            cout << s[i] << endl;
            return;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int d = (s[i]-'0')*10+(s[j]-'0');
            if((d)%8==0) {
                
                cout << "YES" << endl;
                cout << d << endl;
                return;
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                int d = (s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if((d)%8==0) {
                    cout << "YES" << endl;
                    cout << d << endl;
                    return;
                }
            }
        }
    }
    
    cout << "NO" << endl;
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