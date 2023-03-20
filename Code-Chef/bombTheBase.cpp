#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int mark = false;
    int count = 0;
    while(n-1>=0) {
        if(arr[n-1]<x) {
            mark=true;
        }
        if(mark) {
            count++;
        }
        n--;
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