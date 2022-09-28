#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
int numberOnlyOnce(vi &v) {
    int n = v.size();
    int XOR = 0;
    for(int i=0;i<n;i++) {
        XOR ^= v[i];
    }
    return XOR;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v={2,1,1,5,6,2,7,7,6};
    cout << numberOnlyOnce(v);
    return 0;
}