#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
vector<int> NextGraterElement(vector<int> &v) {
    stack<int> st;
    int n = v.size();
    vector<int> ans;
    for(int i=n-1;i>=0;i--) {
        int curr = v[i];
        if(st.empty()) {
            ans.push_back(-1);
        } else if(st.top()>curr) {
            ans.push_back(st.top());
        } else if(st.top()<=curr) {
            while(st.size()>0 && st.top()<=curr) {
                st.pop();
            }
            if(st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
        }
        st.push(curr);
    }
    return ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v={6, 8, 0, 1, 3};
    vi ans = NextGraterElement(v);
    for(int i=ans.size()-1;i>=0;i--) {
        cout << ans[i] << " ";
    }
    return 0;
}