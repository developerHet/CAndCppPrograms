#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    int pairCout=0;
    for(auto i : m) {
        if(i.second>=2) {
            pairCout+=(i.second/2);
        }
    }
    if(pairCout%2==0) {
        if((n-pairCout*2)%2==0) {
            cout << n-(pairCout*2) << endl;
        } else {
            cout << n+2-(pairCout*2) << endl;
        }
    } else {
        if((n-pairCout*2)%2==0) {
            cout << n+2-(pairCout*2) << endl;
        } else {
            cout << n-(pairCout*2) << endl;
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