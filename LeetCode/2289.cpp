#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int totalSteps(vector<int> &nums)
{
    stack<pair<int,int>> st;
    int n = nums.size();
    for(int i=n-1;i>=0;i--) {
        int curr = nums[i];
        int step = 0;
        while(!st.empty()) {
            if(st.top().first>=curr) break;;
            step=max(step+1,st.top().second);
            st.pop();
        }
        st.push({curr,step});
    }
    int ans = 0;
    while(!st.empty())  {
        ans = max(ans,st.top().second);
        st.pop();
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi nums = {10,1,2,3,4,5,6,1,2,3};
    cout << totalSteps(nums);
    return 0;
}