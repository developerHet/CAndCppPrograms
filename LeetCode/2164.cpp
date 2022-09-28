#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
vector<int> sortEvenOdd(vector<int>& v) {
    vector<int> even;
    vector<int>odd;
    int n = v.size();
    for(int i=0;i<n;i++) {
        if(i%2==0) {
            even.push_back(v[i]);
        } else {
            odd.push_back(v[i]);
        }
    }
    v.clear();
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<int>());
    vector<int>::iterator it1 = even.begin();
    vector<int>::iterator it2 = odd.begin();
    for(int i=0;i<n;i++) {
        if((i&1)==0) {
            v.push_back(*it1);
            it1++;
        } else {
            v.push_back(*it2);
            it2++;
        }
    }
    return v;
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v={4,1,2,3};
    vi ans = sortEvenOdd(v);
    int n = ans.size();
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
    }
    return 0;
}