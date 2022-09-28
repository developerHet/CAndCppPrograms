#include <bits/stdc++.h>
using namespace std;


// Using Tabulation
int main() {
    int n;
    cin >> n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++) {
        dp[i] = dp[i-1] + ((i-1)*dp[i-2]);
    }
    cout << dp[n];
    return 0;
}

//using Memoization
/*
int const N = 1e2+3;
int dp[N];

int fPair(int n) {
    if(n==1 || n==2) {
        return n;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    return fPair(n-1) + (n-1)*fPair(n-2);
}

int main() {
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    cout << fPair(n);
    return 0;
}
*/