#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
void subSet(vi v) {
    int n = v.size();
    for(int i = 0; i < (1<<n); i++) {
        vi ans;
        for(int bit=0;bit<n;bit++) {
            if(i&(1<<bit)) {
                ans.push_back(v[bit]);
            }
        }
        for(auto x: ans) {
            cout << x << " ";
        } cout << endl;
    }
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v={2,3,4};
    subSet(v);
    return 0;
}