#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {
        mp[v[i]]++;
    }
    int count = 0;
    int count2 = 0;
    int num = 0;
    for(auto x:mp) {
        if(x.second>count) {
            num = x.first;
            count = x.second;
        }
    }

    for(auto x:mp) {
        if(x.second > count2 ) {
            if(x.first!=num) {
                count2= x.second;
            }
        }
    }
    //cout << count << " " << count2 << endl;
    if(count%2==1) {
        count=(count/2)+1;
    }else {
        count = count/2;
    }
    cout << max(count,count2) << endl;
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