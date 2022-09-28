#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
vector<int> singleNumber(vector<int>& v) {
    int XOR = 0;
    int n= v.size();
    for(int i=0;i<n;i++) {
        XOR^=v[i];
    }
    int count = 0;
    while(XOR!=0) {
        if(XOR&1) {
            break;
        }
        count++;
        XOR>>=1;
    }
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i=0;i<n;i++) {
        if(v[i]&(1<<count)) {
            XOR1^=v[i];
        } else {
            XOR2^=v[i];
        }
    }
    v.clear();
    v.push_back(XOR1);
    v.push_back(XOR2);
    return v;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v={1,2,1,3,2,5};
    vi ans = singleNumber(v);
    int n = ans.size();
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
    }
    return 0;
}