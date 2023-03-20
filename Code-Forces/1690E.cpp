#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
void solve() {
    ll n,k;
    cin >> n >> k;
    vi a(n);
    ll sum = 0;
    for(ll i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i]/k;
        a[i]=a[i]%k;
    }
    sort(a.begin(),a.end(),[](ll x,ll y){
        return x>y;
    });
    for(ll i=0,j=n-1;i<j;i++,j--) {
        while(a[i]+a[j]<k && i<j)j--;
        if(i==j) break;
        sum++;
    }
    cout << sum <<endl;

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