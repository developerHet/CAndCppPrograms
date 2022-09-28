#include <bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
    int ans = INT_MIN;
    int buyPrice = prices[0];
    for(int i=0;i<prices.size();i++) {
      if(buyPrice>prices[i]) {
          buyPrice=prices[i];
      }
      ans = max(ans,prices[i]-buyPrice);  
    }
    if(ans<0) {
        return 0;
    }
    return ans;
}

int main() {
    vector<int> prices{7,2,5,1,6,7,4};
    cout << maxProfit(prices);
    return 0;
}