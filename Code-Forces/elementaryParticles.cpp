#include <bits/stdc++.h>
using namespace std;
#define long long ll

struct node {
    int value = -1;
};
 
void solve() {
    int n;
    cin >> n;
    int arr[n];
    bool mark=false;
    int ans = INT_MIN;
    unordered_map <int,node> first,second;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(first[arr[i]].value==-1) {
            first[arr[i]].value=i;
        }
        else if (second[arr[i]].value==-1){
            mark=true;
            second[arr[i]].value=i;
            ans = max(ans,(first[arr[i]].value)+(n-second[arr[i]].value));
        }
        else {
            first[arr[i]].value=second[arr[i]].value;
            second[arr[i]].value=i;
            ans = max(ans,(first[arr[i]].value)+(n-second[arr[i]].value));
        }
    }

    if(mark) {
        cout << ans << endl;
    }
    else {
        cout << -1 << endl;
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