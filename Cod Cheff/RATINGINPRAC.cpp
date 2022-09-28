#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi arr(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    vi sortArr = arr;
    sort(arr.begin(),arr.end());

    if(sortArr==arr) {
        cout << "YES" << endl;
    } else {
        cout << "NO" <<  endl;
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