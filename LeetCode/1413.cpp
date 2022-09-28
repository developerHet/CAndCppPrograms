#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
int minStartValue(vector<int>& nums) {
   for(int i=0;i<nums.size();i++) {
       if(i>0){
           nums[i]+=nums[i-1];
       }
   }
   int ans = *min_element(nums.begin(),nums.end());
   return ans>0?1:abs(ans)+1;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi nums={1,-2,-3};
    cout << minStartValue(nums);
    return 0;
}