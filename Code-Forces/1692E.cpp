#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,s;
    cin >> n >> s;
    vi a(n);
    int one = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]==1) one+=1;
    }
    if(one<s) {
        cout << -1 << endl;
        return;
    }

    int l = 0;
    int r = 0;

    int sum = 0;
    vi ans;
    while(1) {
        if(r==n) {
            ans.push_back(r-l);
            break;
        }
        if(sum+a[r]<=s) {
            sum+=a[r];
            r++;
        } else {
            ans.push_back(r-l);
            sum-=a[l];
            l++;
        }
    }

    cout << n-(*max_element(ans.begin(),ans.end())) << endl;
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