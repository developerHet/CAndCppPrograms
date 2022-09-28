#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<double> vi;
typedef pair<double,double> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    double n,d;
    cin >> n >> d;
    vi v(n);
    for(double i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    double count = 0;
    double x = n;
    for(double i=n-1;i>=0;i--) {
        double req = ceil((d+1)/v[i]);
        if(x-req>=0) {
            count++;
            x-=req;
            continue;
        } 
        break;
    }
    cout << count << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}