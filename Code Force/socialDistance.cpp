#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n,m;
    cin >> n >> m;
     vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
    if(n>m) {
        cout << "NO" << endl;
    }
    else
    {
       
        sort(arr.begin(), arr.end(), greater<ll>());
        ll sum = 0;
        for(ll i=0;i<n-1;i++) {
            if(i==0) {
                sum+=arr[i]*2;
            } else {
                sum+=arr[i];
            }
        }
        sum+=n;
        //cout << sum << endl;
        if(sum<=m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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