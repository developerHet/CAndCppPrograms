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
    cin >> s;
    int n = s.length();
    multiset<char> ms;
    for(int i=0;i<n;i++) {
        ms.insert(s[i]);
    }
    vector<char> ans(n);
    int l=0,r=n-1;
    int dl=-1,dr=-1;
    while(l<=r && !ms.empty()) {
        if(l==r) {
            ans[l]=*ms.begin();
            break;
        }else {
            auto f = *ms.begin();
            ms.erase(ms.find(f));
            auto s = *ms.begin();
            ms.erase(ms.find(s));
            if(f==s) {
                ans[l]=f;l++;
                ans[r]=s;r--;
                continue;
            } 
            dl=l;
            dr=r;
            ans[l]=s;
            ans[r]=f;
            l++;
            r--;
            while(l<=r) {
                ans[l]=*ms.begin();
                ms.erase(ms.find(ans[l]));
                l++;
            }
        }
    }
    if(dl!=-1) {
        if(ans[dl]!=ans[dr]) {
            bool flag = true;
            for(int i=dl+1;i<dr;i++) {
                if(ans[i]!=ans[i-1]) {
                    flag=false;
                    break;
                }
            }
            if(flag) {
                swap(ans[(dl+dr+1)/2],ans[dr]);
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout << ans[i];
    } cout << endl;
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