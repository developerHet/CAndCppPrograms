#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 

bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
            if(mp[nums[i]]>1) {
                return true;
            }
        }
        return false;
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi nums={1,2,3,1};
    cout << containsDuplicate(nums) << endl;
    return 0;
}