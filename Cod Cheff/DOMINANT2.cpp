#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;

    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vi freq;
    for(auto i: mp) {
        freq.push_back(i.second);
    }
    int y = freq.size();
    if(y==1) cout << "Yes" << endl;
    else {
        sort(freq.begin(),freq.end());
        if(freq[y-1]!=freq[y-2]) cout << "Yes" << endl;
        else cout << "No" << endl;
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