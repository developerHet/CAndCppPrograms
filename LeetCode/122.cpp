#include <bits/stdc++.h>
using namespace std;
 
 
int maxProfit(vector<int>& prices) {
    int buyPrice = prices[0];
    int ans=0;
    for(int i=0;i<prices.size();i++) {
        if(buyPrice>prices[i]) {
            buyPrice=prices[i];
        }
        else if(buyPrice<prices[i]) {
            ans+=prices[i]-buyPrice;
            buyPrice=prices[i];
        }
    }
    return ans;
}

 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> prices{7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}