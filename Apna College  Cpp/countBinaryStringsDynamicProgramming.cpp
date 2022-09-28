#include <bits/stdc++.h>
using namespace std;

// Using Tabulation
int main()
{
    int n;
    cin >> n;
    n+=2;
    int dp[n];
    for(int i=0;i<n;i++) {
        dp[i] = -1;
    }
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];
    return 0;
}

//using Memoization
/*
const int N=1e3+2;
int dp[N];

int fbn(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    return fbn(n - 1) + fbn(n - 2);
}

int main()
{
    for(int i=0;i<N;i++) {
        dp[i] = -1;
    }
    int n;
    cin >> n;
    n += 2;
    cout << fbn(n);
    return 0;
}
*/