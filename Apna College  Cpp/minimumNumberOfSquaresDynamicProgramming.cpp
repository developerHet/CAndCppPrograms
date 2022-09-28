#include <bits/stdc++.h>
using namespace std;


//using Memoization
/*
const int N = 1e5+3;

int dp[N];

int numOfSquar(int n) {

    if(n<=3) {
        return n;
    }

    if(dp[n]!=N) {
        return dp[n];
    }

    for(int i=1;i*i<=n;i++) {
        dp[n] = min(dp[n],1+numOfSquar(n-(i*i)));
    }

    return dp[n];
}

int main() {
    int n;
    for(int i=0;i<N;i++) {
        dp[i]=N;
    }
    cin >> n;
    cout << numOfSquar(n);
    return 0;
}
*/

// Using Tabulation
const int N = 1e5+3;
int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[0]=0;
    for(int i=1;i<=n;i++) {
        dp[i]=i;
        for(int j=1;j*j<=i;j++) {
            dp[i]=min(dp[i],1+dp[n-(j*j)]);
        }
    }
    cout << dp[n];
    return 0;
}