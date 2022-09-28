#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    int arr[n];
    int totalPrice=0;
    int disCountPrice=0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        totalPrice+=arr[i];
        disCountPrice+=(arr[i]-y<=0?0:arr[i]-y);
    }
    if(disCountPrice+x<totalPrice) {
        cout << "COUPON" << endl;
    } else {
        cout << "NO COUPON" << endl;
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