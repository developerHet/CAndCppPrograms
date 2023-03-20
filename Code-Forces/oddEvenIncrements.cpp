#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
   int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr[i]=x%2;
    }
    int ans=true;
    
    for(int i=0;i<n-1;i++) {
        if(i+1<n && arr[i]==arr[i+1]) {
            for(int i=0;i<n-1;i++) {
                if(i+1<n && arr[i]!=arr[i+1]) {
                    ans=false;
                }
            }
            break;
        }
    }

    if(ans){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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