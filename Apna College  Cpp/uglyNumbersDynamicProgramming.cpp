#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    int twoP=1;
    int threeP=1;
    int fiveP=1;
    for(int i=2;i<=n;i++) {
        int mTwo=2*dp[twoP];
        int mThree=3*dp[threeP];
        int mFive=5*dp[fiveP];

        int miin = min(mTwo,min(mThree,mFive));
        if(miin==mTwo) {
            twoP+=1;
        }

        if(miin==mThree) {
            threeP+=1;
        }

        if(miin==mFive) {
            fiveP+=1;
        }
        dp[i] = miin;
    }
    for(int i=1;i<=n;i++) {
        cout << dp[i] << " ";
    }
    return 0;
}