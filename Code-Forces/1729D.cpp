#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {

    int n;
    cin >> n;

    vi x(n),y(n);
    for(int i=0;i<n;i++) {
        cin >> x[i];
    }

    for(int i=0;i<n;i++) {
        cin >> y[i];
    }

    vi v;
    for(int i=0;i<n;i++) {
        v.push_back(y[i]-x[i]);
    }

    sort(v.begin(),v.end());

    int l = 0;
    int r = v.size()-1;
    int count = 0;
    while(l<r) {
        if(v[l]+v[r]>=0) {
            count++;
            r--;
        }
        l++;
    }
    cout << count << endl;
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