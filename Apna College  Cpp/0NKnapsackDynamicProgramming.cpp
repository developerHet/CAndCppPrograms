#include <bits/stdc++.h>
using namespace std;

//using Memoization

const int N = 1e3+2;
 int dp[N][N];

int knapsack(int val[],int wt[],int w,int n) {
    if(n==0 || w==0) {
        return 0;
    }
    if(dp[n][w]!=-1) {
        return dp[n][w];
    }
    if(wt[n-1]<=w) {
        return dp[n][w]=max(knapsack(val,wt,w,n-1),val[n-1] + knapsack(val,wt,w-wt[n-1],n));
    }
    else {
        return dp[n][w]=knapsack(val,wt,w,n-1);
    }
}
int main() {
    int n,w;
    cin >> w >> n;
   
    memset(dp,-1,sizeof(dp));
    int val[n],wt[n];
    for(int i=0;i<n;i++) {
        cin >> val[i];
    }
    for(int i=0;i<n;i++) {
        cin >> wt[i];
    }
    cout << knapsack(val,wt,w,n);
    return 0;
}

// Using Tabulation
/*int main() {
    int w, n;
    cin >> w >> n;
    int val[n],wt[n];
    for(int i=0;i<n;i++) {
        cin >> val[i];
    }
    for(int i=0;i<n;i++) {
        cin >> wt[i];
    }
    int dp[n+1][w+1];
    for(int i=0;i<n+1;i++) {
        for(int j=0;j<w+1;j++) {
            if(i==0 || j==0) {
                dp[i][j]=0;
            }
            else if(j-wt[i-1]>=0) {
                dp[i][j] = max(dp[i-1][j],val[i-1] + dp[i][j-wt[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][w];
    return 0;
} */