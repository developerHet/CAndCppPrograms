#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vi a(n);

    for(ll i=0;i<n;i++) {
        cin >> a[i];
    }

    vi sortA=a;
    sort(sortA.begin(),sortA.end());
    if(sortA==a) {
        //cout << "yes" << endl;
        cout << 0 << endl;
    } else {
        ll l = 0;
        ll r = n-1;

        ll count = 0;
        while(l<r) {
            
            if(a[l]==1 && a[r]==0) {
                count++;
                // a[l]=0;
                // a[r]=1;
                l++;
                r--;
            } else if(a[l]==0 && a[r]==1) {
                l++;
                r--;
            }  else if(a[r]==1 || a[l]==1) {
                r--;
            } else if(a[l]==0 || a[r]==0) {
                l++;
            }
            //cout <<l<<" -> "<<r << endl;
        }
        cout << count << endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}