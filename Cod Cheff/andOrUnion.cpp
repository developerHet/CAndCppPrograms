#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++) {
        for(int b=0;b<32;b++) {
            if(arr[i]&(1<<b)) {
                mp[b]++;
            }
        }
    }
    int ans=0;
    for(auto i: mp) {
        if(i.second>1) {
            ans |= (1<<i.first);
        }
    }
    cout << ans << endl;
}
 
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}