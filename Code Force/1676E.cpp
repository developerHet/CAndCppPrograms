#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,q;
    cin >> n >> q;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    vi a(q);

    for(int i=0;i<q;i++) {
        cin >> a[i];
    }

    sort(v.begin(),v.end(),greater<int>());

    for(int i=1;i<n;i++) {
        v[i]=v[i]+v[i-1];
    }


    for(int j=0;j<q;j++) {
        int l = 0;
        int r = n-1;

        int i = 1;
        int ans = -1;
        while(l<=r) {
            int mid = l+(r-l)/2;
            if(v[mid]==a[j]) {
                ans=mid+1;
                break;
            } else if(v[mid]<a[j]) {
                l=mid+1;
            } else {
                ans = mid+1;
                r=mid-1;
            }
        }
        if(v[ans-1]>=a[j]) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}