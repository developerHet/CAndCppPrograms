#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int ans=INT_MIN;
    int count = 0;
    for(int i=0;i<nums.size();i++) {
        count+=nums[i];
        ans=max(ans,count);
        if(count<0) {
            count=0;
        }
    }
    return ans;
}

int main() {
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);
    return 0;
}