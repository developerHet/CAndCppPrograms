#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n,b,x,y;
    cin >> n >> b >> x >> y;
    ll arr[n+1];
    arr[0]=0;
    ll sum=0;
    for(ll i=1;i<=n;i++) {
        ll first = arr[i-1] + x;
        ll second = arr[i-1] - y;
        if(first<=b && second<=b) {
            arr[i]=max(first,second);
        }
        else if(second<=b) {
            arr[i]=second;
        }
        else {
            arr[i]=first;
        }
        sum+=arr[i];
    }

    cout << sum << endl;
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